/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_563.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2815(t_small_parse_table_array *v)
{
	v->a[56300] = 1;
	v->a[56301] = anon_sym_LPAREN;
	v->a[56302] = actions(1746);
	v->a[56303] = 1;
	v->a[56304] = anon_sym_BANG;
	v->a[56305] = actions(1754);
	v->a[56306] = 1;
	v->a[56307] = anon_sym_TILDE;
	v->a[56308] = actions(1756);
	v->a[56309] = 1;
	v->a[56310] = anon_sym_DOLLAR;
	v->a[56311] = actions(1758);
	v->a[56312] = 1;
	v->a[56313] = anon_sym_DQUOTE;
	v->a[56314] = actions(1762);
	v->a[56315] = 1;
	v->a[56316] = anon_sym_DOLLAR_LBRACE;
	v->a[56317] = actions(1764);
	v->a[56318] = 1;
	v->a[56319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2816(v);
}

void	small_parse_table_2816(t_small_parse_table_array *v)
{
	v->a[56320] = actions(1766);
	v->a[56321] = 1;
	v->a[56322] = anon_sym_BQUOTE;
	v->a[56323] = actions(1768);
	v->a[56324] = 1;
	v->a[56325] = sym_variable_name;
	v->a[56326] = actions(1750);
	v->a[56327] = 2;
	v->a[56328] = anon_sym_PLUS_PLUS;
	v->a[56329] = anon_sym_DASH_DASH;
	v->a[56330] = actions(1752);
	v->a[56331] = 2;
	v->a[56332] = anon_sym_DASH2;
	v->a[56333] = anon_sym_PLUS2;
	v->a[56334] = actions(1760);
	v->a[56335] = 2;
	v->a[56336] = sym_number;
	v->a[56337] = aux_sym__simple_variable_name_token1;
	v->a[56338] = state(271);
	v->a[56339] = 3;
	small_parse_table_2817(v);
}

void	small_parse_table_2817(t_small_parse_table_array *v)
{
	v->a[56340] = sym_string;
	v->a[56341] = sym_simple_expansion;
	v->a[56342] = sym_expansion;
	v->a[56343] = state(301);
	v->a[56344] = 8;
	v->a[56345] = sym__arithmetic_expression;
	v->a[56346] = sym_arithmetic_literal;
	v->a[56347] = sym_arithmetic_binary_expression;
	v->a[56348] = sym_arithmetic_ternary_expression;
	v->a[56349] = sym_arithmetic_unary_expression;
	v->a[56350] = sym_arithmetic_postfix_expression;
	v->a[56351] = sym_arithmetic_parenthesized_expression;
	v->a[56352] = sym_command_substitution;
	v->a[56353] = 3;
	v->a[56354] = actions(3);
	v->a[56355] = 1;
	v->a[56356] = sym_comment;
	v->a[56357] = actions(1037);
	v->a[56358] = 3;
	v->a[56359] = sym_file_descriptor;
	small_parse_table_2818(v);
}

void	small_parse_table_2818(t_small_parse_table_array *v)
{
	v->a[56360] = sym__concat;
	v->a[56361] = sym__bare_dollar;
	v->a[56362] = actions(1035);
	v->a[56363] = 23;
	v->a[56364] = anon_sym_PIPE;
	v->a[56365] = anon_sym_AMP_AMP;
	v->a[56366] = anon_sym_PIPE_PIPE;
	v->a[56367] = anon_sym_LT;
	v->a[56368] = anon_sym_GT;
	v->a[56369] = anon_sym_GT_GT;
	v->a[56370] = anon_sym_LT_AMP;
	v->a[56371] = anon_sym_GT_AMP;
	v->a[56372] = anon_sym_GT_PIPE;
	v->a[56373] = anon_sym_LT_AMP_DASH;
	v->a[56374] = anon_sym_GT_AMP_DASH;
	v->a[56375] = anon_sym_LT_LT;
	v->a[56376] = anon_sym_LT_LT_DASH;
	v->a[56377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56378] = aux_sym_concatenation_token1;
	v->a[56379] = anon_sym_DOLLAR;
	small_parse_table_2819(v);
}

void	small_parse_table_2819(t_small_parse_table_array *v)
{
	v->a[56380] = anon_sym_DQUOTE;
	v->a[56381] = sym_raw_string;
	v->a[56382] = sym_number;
	v->a[56383] = anon_sym_DOLLAR_LBRACE;
	v->a[56384] = anon_sym_DOLLAR_LPAREN;
	v->a[56385] = anon_sym_BQUOTE;
	v->a[56386] = sym_word;
	v->a[56387] = 3;
	v->a[56388] = actions(3);
	v->a[56389] = 1;
	v->a[56390] = sym_comment;
	v->a[56391] = actions(1041);
	v->a[56392] = 3;
	v->a[56393] = sym_file_descriptor;
	v->a[56394] = sym__concat;
	v->a[56395] = sym__bare_dollar;
	v->a[56396] = actions(1039);
	v->a[56397] = 23;
	v->a[56398] = anon_sym_PIPE;
	v->a[56399] = anon_sym_AMP_AMP;
	small_parse_table_2820(v);
}

/* EOF small_parse_table_563.c */
