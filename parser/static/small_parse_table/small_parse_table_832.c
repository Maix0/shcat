/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_832.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4160(t_small_parse_table_array *v)
{
	v->a[83200] = sym_extglob_pattern;
	v->a[83201] = actions(4362);
	v->a[83202] = 1;
	v->a[83203] = sym__brace_start;
	v->a[83204] = actions(4548);
	v->a[83205] = 1;
	v->a[83206] = anon_sym_LPAREN;
	v->a[83207] = actions(4550);
	v->a[83208] = 1;
	v->a[83209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83210] = actions(4552);
	v->a[83211] = 1;
	v->a[83212] = sym__special_character;
	v->a[83213] = actions(4554);
	v->a[83214] = 1;
	v->a[83215] = anon_sym_DQUOTE;
	v->a[83216] = actions(4556);
	v->a[83217] = 1;
	v->a[83218] = anon_sym_DOLLAR_LBRACE;
	v->a[83219] = actions(4558);
	small_parse_table_4161(v);
}

void	small_parse_table_4161(t_small_parse_table_array *v)
{
	v->a[83220] = 1;
	v->a[83221] = anon_sym_BQUOTE;
	v->a[83222] = actions(4560);
	v->a[83223] = 1;
	v->a[83224] = anon_sym_DOLLAR_BQUOTE;
	v->a[83225] = state(3393);
	v->a[83226] = 1;
	v->a[83227] = aux_sym__literal_repeat1;
	v->a[83228] = state(3828);
	v->a[83229] = 1;
	v->a[83230] = sym_last_case_item;
	v->a[83231] = actions(4358);
	v->a[83232] = 2;
	v->a[83233] = sym_test_operator;
	v->a[83234] = sym_raw_string;
	v->a[83235] = state(1881);
	v->a[83236] = 2;
	v->a[83237] = sym_case_item;
	v->a[83238] = aux_sym_case_statement_repeat1;
	v->a[83239] = state(3472);
	small_parse_table_4162(v);
}

void	small_parse_table_4162(t_small_parse_table_array *v)
{
	v->a[83240] = 2;
	v->a[83241] = sym_concatenation;
	v->a[83242] = sym__extglob_blob;
	v->a[83243] = state(3295);
	v->a[83244] = 7;
	v->a[83245] = sym_arithmetic_expansion;
	v->a[83246] = sym_brace_expression;
	v->a[83247] = sym_string;
	v->a[83248] = sym_number;
	v->a[83249] = sym_simple_expansion;
	v->a[83250] = sym_expansion;
	v->a[83251] = sym_command_substitution;
	v->a[83252] = 6;
	v->a[83253] = actions(3);
	v->a[83254] = 1;
	v->a[83255] = sym_comment;
	v->a[83256] = actions(828);
	v->a[83257] = 1;
	v->a[83258] = sym_file_descriptor;
	v->a[83259] = actions(4679);
	small_parse_table_4163(v);
}

void	small_parse_table_4163(t_small_parse_table_array *v)
{
	v->a[83260] = 1;
	v->a[83261] = sym_variable_name;
	v->a[83262] = actions(4677);
	v->a[83263] = 2;
	v->a[83264] = aux_sym__simple_variable_name_token1;
	v->a[83265] = aux_sym__multiline_variable_name_token1;
	v->a[83266] = actions(4675);
	v->a[83267] = 9;
	v->a[83268] = anon_sym_BANG;
	v->a[83269] = anon_sym_DASH;
	v->a[83270] = anon_sym_STAR;
	v->a[83271] = anon_sym_QMARK;
	v->a[83272] = anon_sym_DOLLAR;
	v->a[83273] = anon_sym_POUND;
	v->a[83274] = anon_sym_AT;
	v->a[83275] = anon_sym_0;
	v->a[83276] = anon_sym__;
	v->a[83277] = actions(826);
	v->a[83278] = 16;
	v->a[83279] = anon_sym_PIPE;
	small_parse_table_4164(v);
}

void	small_parse_table_4164(t_small_parse_table_array *v)
{
	v->a[83280] = anon_sym_PIPE_AMP;
	v->a[83281] = anon_sym_AMP_AMP;
	v->a[83282] = anon_sym_PIPE_PIPE;
	v->a[83283] = anon_sym_LT;
	v->a[83284] = anon_sym_GT;
	v->a[83285] = anon_sym_GT_GT;
	v->a[83286] = anon_sym_AMP_GT;
	v->a[83287] = anon_sym_AMP_GT_GT;
	v->a[83288] = anon_sym_LT_AMP;
	v->a[83289] = anon_sym_GT_AMP;
	v->a[83290] = anon_sym_GT_PIPE;
	v->a[83291] = anon_sym_LT_AMP_DASH;
	v->a[83292] = anon_sym_GT_AMP_DASH;
	v->a[83293] = anon_sym_LT_LT;
	v->a[83294] = anon_sym_LT_LT_DASH;
	v->a[83295] = 21;
	v->a[83296] = actions(57);
	v->a[83297] = 1;
	v->a[83298] = sym_comment;
	v->a[83299] = actions(4614);
	small_parse_table_4165(v);
}

/* EOF small_parse_table_832.c */
