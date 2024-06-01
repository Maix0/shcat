/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const SPECIAL_CHARACTERS = [
	'\'', '"',
	'<', '>',
	'{', '}',
	'\\[', '\\]',
	'(', ')',
	'`', '$',
	'|', '&', ';',
	'\\',
	'\\s',
];

module.exports = grammar({
	name: "sh",

	rules: {
		source_file: $ => repeat($.program),
		program: $ => $.expansion,

		expansion: $ => choice(
			$.basic_expansion,
			$.complex_expansion,
			$.arithmetic_expansion,
			$.command_substitution,
		),

		basic_expansion: $ => seq("$", field("varname", $.varname)),

		complex_expansion: $ => seq(
			"${",
			optional(choice(
				seq(
					optional(field("prefix", $.complex_expansion_prefix)),
					field("varname", choice($.varname, repeat1(/[0-9]/))),
				),
				seq(
					field("varname", choice($.varname, repeat1(/[0-9]/))),
					optional(field("suffix", $.complex_expansion_suffix)),
				),
			)),
			"}",
		),
		complex_expansion_prefix: _ => prec(1, choice('#')),
		complex_expansion_suffix: $ => choice(
			...CESuffixRegex(['%', '%%', '#', '##'], $.suffix_matching),
			...CESuffixWord(['+', '-', '=', '?'], $.suffix_word),
		),

		suffix_matching: _ => 'matching',
		suffix_word: _ => 'word',

		varname: $ => choice($._special_varname, seq(/[a-zA-Z]/, repeat(/[a-zA-Z0-9_]/))),
		_special_varname: _ => choice("@", "*", "#", "?", "?", "-", "$", "!", "0", /[1-9]/),
		command_substitution: $ => seq("$(", repeat($.program), ")"),
		arithmetic_expansion: _ => seq("$((", "))"),

		// word: _ => token(seq(
		// 	choice(
		// 		noneOf('#', ...SPECIAL_CHARACTERS),
		// 		seq('\\', noneOf('\\s')),
		// 	),
		// 	repeat(choice(
		// 		noneOf(...SPECIAL_CHARACTERS),
		// 		seq('\\', noneOf('\\s')),
		// 		'\\ ',
		// 	)),
		// )),
	}
});


/**
 * Returns a regular expression that matches any character except the ones
 * provided.
 * @param  {...string} characters
 * @return {RegExp}
 */
function noneOf(...characters) {
	const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('');
	return new RegExp('[^' + negatedString + ']');
}

/**
 *
 * Turns a list of rules into a choice of immediate rule
 *
 * @param {(RegExp|String)[]} literals
 *
 * @return {ImmediateTokenRule[]}
 */
function immediateLiterals(...literals) {
	return literals.map(l => token.immediate(l));
}

/**
 *
 * Turns a list of rules into a choice of aliased token rules
 *
 * @param {number} precedence
 *
 * @param {(RegExp|String)[]} literals
 *
 * @return {ChoiceRule}
 */
function tokenLiterals(precedence, ...literals) {
	return choice(...literals.map(l => token(prec(precedence, l))));
}

/**
 * @param {(string)[]} op 
 * @param {RuleOrLiteral} rule 
 * @return {RuleOrLiteral[]}
 */
function CESuffixRegex(op, rule) {
	return (op.map(o => seq(o, rule)));
}

/**
 * @param {(string)[]} op 
 * @param {RuleOrLiteral} rule 
 * @return {RuleOrLiteral[]}
 */
function CESuffixWord(op, rule) {
	return (op.flatMap(o => [seq(token.immediate(`${o}`), rule), seq(token.immediate(`:${o}`), rule)]));
}
