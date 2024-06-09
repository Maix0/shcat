/**
 * @file Bash grammar for tree-sitter
 * @author Max Brunsfeld <maxbrunsfeld@gmail.com>
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const SPECIAL_CHARACTERS = [
  '|', '&', ';', '<', '>', '(', ')', '$', '`', '\\', '\"', '\'', ' ', '\t', '\n',
]

const PREC = {
  UPDATE: 0,
  ASSIGN: 1,
  TERNARY: 2,
  LOGICAL_OR: 3,
  LOGICAL_AND: 4,
  BITWISE_OR: 5,
  BITWISE_XOR: 6,
  BITWISE_AND: 7,
  EQUALITY: 8,
  COMPARE: 9,
  TEST: 10,
  UNARY: 11,
  SHIFT: 12,
  ADD: 13,
  MULTIPLY: 14,
  EXPONENT: 15,
  NEGATE: 16,
  PREFIX: 17,
  POSTFIX: 18,
};

module.exports = grammar({
  name: 'sh',

  conflicts: $ => [
    [$.command, $.variable_assignments],
    [$.redirected_statement, $.command],
    [$.redirected_statement, $.command_substitution],
    [$.function_definition, $.command_name],
    [$.pipeline],
  ],

  inline: $ => [
    $._statement,
    $._terminator,
    $._literal,
    $._terminated_statement,
    $._primary_expression,
    $._simple_variable_name,
    $._multiline_variable_name,
    $._special_variable_name,
    $._statement_not_subshell,
  ],

  externals: $ => [
    $.heredoc_start,
    $.simple_heredoc_body,
    $._heredoc_body_beginning,
    $.heredoc_content,
    $.heredoc_end,
    $.file_descriptor,
    $._empty_value,
    $._concat,
    $.variable_name, // Variable name followed by an operator like '=' or '+='
    $.regex,
    $._expansion_word,
    $.extglob_pattern,
    $._bare_dollar,
    $._immediate_double_hash,
    '<<',
    '<<-',
    /\n/,
    '(',
    'esac',
    $.__error_recovery,
  ],

  extras: $ => [
    $.comment,
    /\s/,
    /\\\r?\n/,
    /\\( |\t|\v|\f)/,
  ],

  supertypes: $ => [
    $._statement,
    $._primary_expression,
  ],

  word: $ => $.word,

  rules: {
    program: $ => optional($._statements),

    _statements: $ => prec(1, seq(
      repeat(seq(
        $._statement,
        $._terminator,
      )),
      $._statement,
      optional($._terminator),
    )),

    _terminated_statement: $ => repeat1(seq($._statement, $._terminator)),

    // Statements

    _statement: $ => choice(
      $._statement_not_subshell,
      $.subshell,
    ),

    _statement_not_subshell: $ => choice(
      $.case_statement,
      $.command,
      $.compound_statement,
      $.for_statement,
      $.function_definition,
      $.if_statement,
      $.list,
      $.negated_command,
      $.pipeline,
      $.redirected_statement,
      $.variable_assignment,
      $.variable_assignments,
      $.while_statement,
    ),

    _statement_not_pipeline: $ => prec(1, choice(
      $.case_statement,
      $.command,
      $.compound_statement,
      $.for_statement,
      $.function_definition,
      $.if_statement,
      $.list,
      $.negated_command,
      $.redirected_statement,
      $.subshell,
      $.variable_assignment,
      $.variable_assignments,
      $.while_statement,
    )),

    redirected_statement: $ => prec.dynamic(-1, prec.right(-1, choice(
      seq(
        field('body', $._statement),
        field('redirect', repeat1(choice($.file_redirect, $.heredoc_redirect))),
      ),
      field('redirect', repeat1($.file_redirect)),
    ))),

    for_statement: $ => seq(
      'for',
      field('variable', $._simple_variable_name),
      optional(seq(
        'in',
        field('value', repeat1($._literal)),
      )),
      $._terminator,
      field('body', $.do_group),
    ),

    while_statement: $ => seq(
      choice('while', 'until'),
      field('condition', $._terminated_statement),
      field('body', $.do_group),
    ),

    do_group: $ => seq(
      'do',
      optional($._terminated_statement),
      'done',
    ),

    if_statement: $ => seq(
      'if',
      field('condition', $._terminated_statement),
      'then',
      optional($._terminated_statement),
      repeat($.elif_clause),
      optional($.else_clause),
      'fi',
    ),

    elif_clause: $ => seq(
      'elif',
      $._terminated_statement,
      'then',
      optional($._terminated_statement),
    ),

    else_clause: $ => seq(
      'else',
      optional($._terminated_statement),
    ),

    case_statement: $ => seq(
      'case',
      field('value', $._literal),
      optional($._terminator),
      'in',
      optional($._terminator),
      optional(seq(
        repeat(field('cases', $.case_item)),
        field('cases', alias($._case_item_last, $.case_item))
      )),
      'esac',
    ),

    _case_item_last: $ => seq(
      optional('('),
      field('value', choice($._literal, $._extglob_blob)),
      repeat(seq('|', field('value', choice($._literal, $._extglob_blob)))),
      ')',
      repeat('\n'),
      choice(field('cmds', $._statements)),
      optional(';;')
    ),

    case_item: $ => seq(
      optional('('),
      field('value', choice($._literal, $._extglob_blob)),
      repeat(seq('|', field('value', choice($._literal, $._extglob_blob)))),
      ')',
      repeat('\n'),
      choice(field('cmds', $._statements)),
      ';;'
    ),

    function_definition: $ => prec.right(seq(
      field('name', $.word),
      '(', ')',
      field('body', choice($.compound_statement, $.subshell, $.command, $.while_statement, $.if_statement, $.for_statement, $.variable_assignments, repeat1($.file_redirect))),
    )),

    compound_statement: $ => seq('{', $._terminated_statement, '}'),
    subshell: $ => seq('(', $._statements, ')'),

    pipeline: $ => prec.right(seq(
      $._statement_not_pipeline,
      repeat1(seq('|', $._statement_not_pipeline)),
    )),

    list: $ => prec.left(-1, seq(
      field('cmd', $._statement),
      field('op', alias(choice('&&', '||'), $.operator)),
      field('cmd', $._statement),
    )),

    // Commands

    negated_command: $ => seq(
      '!',
      choice(
        prec(2, $.command),
        prec(1, $.variable_assignment),
        $.subshell,
      ),
    ),

    command: $ => prec.left(seq(
      repeat(choice(
        $.variable_assignment,
        field('redirect', $.file_redirect),
      )),
      field('name', $.command_name),
      choice(
        repeat(choice(
          field('arg', $._literal),
          field('arg', alias($._bare_dollar, '$')),
        )),
        $.subshell,
      ),
    )),

    command_name: $ => $._literal,

    variable_assignment: $ => seq(
      field('name', choice(
        $.variable_name,
      )),
      '=',
      field('value', choice(
        $._literal,

        $._empty_value,
        alias($._comment_word, $.word),
      )),
    ),

    variable_assignments: $ => seq($.variable_assignment, repeat1($.variable_assignment)),

    file_redirect: $ => prec.left(seq(
      field('fd', optional($.file_descriptor)),
      choice(
        seq(
          field('op', alias(choice('<', '>', '>>', '&>', '&>>', '<&', '>&', '>|'), $.operator)),
          field('dest', repeat1($._literal)),
        ),
        seq(
          field('op', alias(choice('<&-', '>&-'), $.operator)),
          field('dest', optional($._literal)),
        ),
      ),
    )),

    heredoc_redirect: $ => seq(
      field('fd', optional($.file_descriptor)),
      field('op', alias(choice('<<', '<<-'), $.operator)),
      $.heredoc_start,
      optional(choice(
        alias($._heredoc_pipeline, $.pipeline),
        seq(
          field('redirect', repeat1($.file_redirect)),
          optional($._heredoc_expression),
        ),
        $._heredoc_expression,
        $._heredoc_command,
      )),
      /\n/,
      choice($._heredoc_body, $._simple_heredoc_body),
    ),

    _heredoc_pipeline: $ => seq(
      choice('|', '|&'),
      $._statement,
    ),

    _heredoc_expression: $ => seq(
      field('op', alias(choice('||', '&&'), $.operator)),
      field('right', $._statement),
    ),

    _heredoc_command: $ => repeat1(field('arg', $._literal)),

    _heredoc_body: $ => seq(
      $.heredoc_body,
      $.heredoc_end,
    ),

    heredoc_body: $ => seq(
      $._heredoc_body_beginning,
      repeat(choice(
        $.expansion,
        $.simple_expansion,
        $.command_substitution,
        $.heredoc_content,
      )),
    ),

    _simple_heredoc_body: $ => seq(alias($.simple_heredoc_body, $.heredoc_body), $.heredoc_end),

    // Literals

    _literal: $ => choice($.concatenation, $._primary_expression),

    _primary_expression: $ => choice(
      $.word,
      $.string,
      $.raw_string,
      $.number,
      $.expansion,
      $.simple_expansion,
      $.command_substitution,
      $.arithmetic_expansion,
    ),

    arithmetic_expansion: $ => seq('$((', optional($._arithmetic_expression), '))'),

    _arithmetic_expression: $ => prec(1, choice(
      $.arithmetic_literal,
      $.arithmetic_unary_expression,
      $.arithmetic_ternary_expression,
      $.arithmetic_binary_expression,
      $.arithmetic_postfix_expression,
      $.arithmetic_parenthesized_expression,
      $.command_substitution,
    )),

    arithmetic_literal: $ => prec(1, choice(
      $.number,
      $.simple_expansion,
      $.expansion,
      $._simple_variable_name,
      $.variable_name,
      $.string,
    )),

    arithmetic_binary_expression: $ => {

      /** @type {[RuleOrLiteral, number][]} */
      const table = [
        [choice('+=', '-=', '*=', '/=', '%=', '<<=', '>>=', '&=', '^=', '|='), PREC.UPDATE],
        ['=', PREC.ASSIGN],
        ['||', PREC.LOGICAL_OR],
        ['&&', PREC.LOGICAL_AND],
        ['|', PREC.BITWISE_OR],
        ['^', PREC.BITWISE_XOR],
        ['&', PREC.BITWISE_AND],
        [choice('==', '!='), PREC.EQUALITY],
        [choice('<', '>', '<=', '>='), PREC.COMPARE],
        [choice('<<', '>>'), PREC.SHIFT],
        [choice('+', '-'), PREC.ADD],
        [choice('*', '/', '%'), PREC.MULTIPLY],
      ];

      return choice(...table.map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._arithmetic_expression),
          field('op', alias(operator, $.operator)),
          field('right', $._arithmetic_expression),
        ))
      ));
    },

    arithmetic_ternary_expression: $ => prec.left(PREC.TERNARY, seq(
      field('condition', $._arithmetic_expression),
      '?',
      field('consequence', $._arithmetic_expression),
      ':',
      field('alternative', $._arithmetic_expression),
    )),

    arithmetic_unary_expression: $ => choice(
      prec(PREC.PREFIX, seq(
        field('op', alias(tokenLiterals(1, '++', '--'), $.operator)),
        $._arithmetic_expression,
      )),
      prec(PREC.UNARY, seq(
        field('op', alias(tokenLiterals(1, '-', '+', '~'), $.operator)),
        $._arithmetic_expression,
      )),
      prec.right(PREC.UNARY, seq(
        field('op', alias('!', $.operator)),
        $._arithmetic_expression,
      )),
    ),

    arithmetic_postfix_expression: $ => prec(PREC.POSTFIX, seq(
      $._arithmetic_expression,
      field('op', alias(choice('++', '--'), $.operator)),
    )),

    arithmetic_parenthesized_expression: $ => seq('(', $._arithmetic_expression, ')'),

    concatenation: $ => prec(-1, seq(
      $._primary_expression,
      repeat1(seq(
        choice($._concat, alias(/`\s*`/, '``')),
        choice(
          $._primary_expression,
          alias($._comment_word, $.word),
          alias($._bare_dollar, '$'),
        ),
      )),
      optional(seq($._concat, '$')),
    )),

    string: $ => seq(
      '"',
      repeat(seq(
        choice(
          seq(optional('$'), $.string_content),
          $.expansion,
          $.simple_expansion,
          $.command_substitution,
          $.arithmetic_expansion,
        ),
        optional($._concat),
      )),
      optional('$'),
      '"',
    ),

    string_content: _ => token(prec(-1, /([^"`$\\\r\n]|\\(.|\r?\n))+/)),

    raw_string: _ => /'[^']*'/,

    number: $ => choice(
      /-?(0x)?[0-9]+(#[0-9A-Za-z@_]+)?/,
      // the base can be an expansion or command substitution
      seq(/-?(0x)?[0-9]+#/, choice($.expansion, $.command_substitution)),
    ),

    simple_expansion: $ => seq(
      '$',
      choice(
        $._simple_variable_name,
        $._multiline_variable_name,
        $._special_variable_name,
        $.variable_name,
        alias('!', $.special_variable_name),
        alias('#', $.special_variable_name),
      ),
    ),

    expansion: $ => seq(
      '${',
      optional($._expansion_body),
      '}',
    ),
    _expansion_body: $ => seq(
      field('name', choice($.variable_name, $._simple_variable_name, $._special_variable_name)),
      field('op', optional(choice($.expansion_expression, $.expansion_regex))),
    ),


    expansion_expression: $ => prec(1, seq(
      field('op', alias(immediateLiterals(':-', '-', ':=', '=', ':?', '?', ':+', '+'), $.operator)),
      optional(seq(
        choice(
          alias($._concatenation_in_expansion, $.concatenation),
          $.word,
          $.expansion,
          $.string,
          $.raw_string,
          alias($._expansion_word, $.word),
        ),
      )),
    )),

    expansion_regex: $ => seq(
      field('op', alias(choice('#', $._immediate_double_hash, '%', '%%'), $.operator)),
      repeat(choice(
        $.regex,
        alias(')', $.regex),
        $.string,
        $.raw_string,
        alias(/\s+/, $.regex),
      )),
    ),


    _concatenation_in_expansion: $ => prec(-2, seq(
      choice(
        $.word,
        $.variable_name,
        $.simple_expansion,
        $.expansion,
        $.string,
        $.raw_string,
        $.command_substitution,
        alias($._expansion_word, $.word),
      ),
      repeat1(seq(
        choice($._concat, alias(/`\s*`/, '``')),
        choice(
          $.word,
          $.variable_name,
          $.simple_expansion,
          $.expansion,
          $.string,
          $.raw_string,
          $.command_substitution,
          alias($._expansion_word, $.word),
        ),
      )),
    )),

    command_substitution: $ => choice(
      seq('$(', $._statements, ')'),
      seq('$(', field('redirect', $.file_redirect), ')'),
      prec(1, seq('`', $._statements, '`')),
    ),

    _extglob_blob: $ => choice(
      $.extglob_pattern,
      seq(
        $.extglob_pattern,
        choice($.string, $.expansion, $.command_substitution),
        optional($.extglob_pattern),
      ),
    ),

    comment: _ => token(prec(-10, /#.*/)),

    _comment_word: _ => token(prec(-8, seq(
      choice(
        noneOf(...SPECIAL_CHARACTERS),
        seq('\\', noneOf('\\s')),
      ),
      repeat(choice(
        noneOf(...SPECIAL_CHARACTERS),
        seq('\\', noneOf('\\s')),
        '\\ ',
      )),
    ))),

    _simple_variable_name: $ => alias(/\w+/, $.variable_name),
    _multiline_variable_name: $ => alias(
      token(prec(-1, /(\w|\\\r?\n)+/)),
      $.variable_name,
    ),

    _special_variable_name: $ => alias(choice('*', '@', '?', '!', '#', '-', '$', '0', '_'), $.special_variable_name),

    word: _ => token(seq(
      choice(
        noneOf('#', ...SPECIAL_CHARACTERS),
        seq('\\', noneOf('\\s')),
      ),
      repeat(choice(
        noneOf(...SPECIAL_CHARACTERS),
        seq('\\', noneOf('\\s')),
        '\\ ',
      )),
    )),
    _terminator: _ => choice(';', ';;', /\n/, '&'),
  },
});

/**
 * Returns a regular expression that matches any character except the ones
 * provided.
 *
 * @param  {...string} characters
 *
 * @return {RegExp}
 *
 */
function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('');
  return new RegExp('[^' + negatedString + ']');
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 *
 * Turns a list of rules into a choice of immediate rule
 *
 * @param {(RegExp|String)[]} literals
 *
 * @return {ChoiceRule}
 */
function immediateLiterals(...literals) {
  return choice(...literals.map(l => token.immediate(l)));
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
