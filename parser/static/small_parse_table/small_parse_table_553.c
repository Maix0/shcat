/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_553.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2765(t_small_parse_table_array *v)
{
	v->a[55300] = sym_number;
	v->a[55301] = aux_sym__simple_variable_name_token1;
	v->a[55302] = state(334);
	v->a[55303] = 3;
	v->a[55304] = sym_string;
	v->a[55305] = sym_simple_expansion;
	v->a[55306] = sym_expansion;
	v->a[55307] = state(394);
	v->a[55308] = 8;
	v->a[55309] = sym__arithmetic_expression;
	v->a[55310] = sym_arithmetic_literal;
	v->a[55311] = sym_arithmetic_binary_expression;
	v->a[55312] = sym_arithmetic_ternary_expression;
	v->a[55313] = sym_arithmetic_unary_expression;
	v->a[55314] = sym_arithmetic_postfix_expression;
	v->a[55315] = sym_arithmetic_parenthesized_expression;
	v->a[55316] = sym_command_substitution;
	v->a[55317] = 3;
	v->a[55318] = actions(3);
	v->a[55319] = 1;
	small_parse_table_2766(v);
}

void	small_parse_table_2766(t_small_parse_table_array *v)
{
	v->a[55320] = sym_comment;
	v->a[55321] = actions(970);
	v->a[55322] = 3;
	v->a[55323] = sym_file_descriptor;
	v->a[55324] = sym__concat;
	v->a[55325] = sym__bare_dollar;
	v->a[55326] = actions(968);
	v->a[55327] = 23;
	v->a[55328] = anon_sym_PIPE;
	v->a[55329] = anon_sym_AMP_AMP;
	v->a[55330] = anon_sym_PIPE_PIPE;
	v->a[55331] = anon_sym_LT;
	v->a[55332] = anon_sym_GT;
	v->a[55333] = anon_sym_GT_GT;
	v->a[55334] = anon_sym_LT_AMP;
	v->a[55335] = anon_sym_GT_AMP;
	v->a[55336] = anon_sym_GT_PIPE;
	v->a[55337] = anon_sym_LT_AMP_DASH;
	v->a[55338] = anon_sym_GT_AMP_DASH;
	v->a[55339] = anon_sym_LT_LT;
	small_parse_table_2767(v);
}

void	small_parse_table_2767(t_small_parse_table_array *v)
{
	v->a[55340] = anon_sym_LT_LT_DASH;
	v->a[55341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55342] = aux_sym_concatenation_token1;
	v->a[55343] = anon_sym_DOLLAR;
	v->a[55344] = anon_sym_DQUOTE;
	v->a[55345] = sym_raw_string;
	v->a[55346] = sym_number;
	v->a[55347] = anon_sym_DOLLAR_LBRACE;
	v->a[55348] = anon_sym_DOLLAR_LPAREN;
	v->a[55349] = anon_sym_BQUOTE;
	v->a[55350] = sym_word;
	v->a[55351] = 3;
	v->a[55352] = actions(3);
	v->a[55353] = 1;
	v->a[55354] = sym_comment;
	v->a[55355] = actions(939);
	v->a[55356] = 3;
	v->a[55357] = sym_file_descriptor;
	v->a[55358] = sym__concat;
	v->a[55359] = sym__bare_dollar;
	small_parse_table_2768(v);
}

void	small_parse_table_2768(t_small_parse_table_array *v)
{
	v->a[55360] = actions(937);
	v->a[55361] = 23;
	v->a[55362] = anon_sym_PIPE;
	v->a[55363] = anon_sym_AMP_AMP;
	v->a[55364] = anon_sym_PIPE_PIPE;
	v->a[55365] = anon_sym_LT;
	v->a[55366] = anon_sym_GT;
	v->a[55367] = anon_sym_GT_GT;
	v->a[55368] = anon_sym_LT_AMP;
	v->a[55369] = anon_sym_GT_AMP;
	v->a[55370] = anon_sym_GT_PIPE;
	v->a[55371] = anon_sym_LT_AMP_DASH;
	v->a[55372] = anon_sym_GT_AMP_DASH;
	v->a[55373] = anon_sym_LT_LT;
	v->a[55374] = anon_sym_LT_LT_DASH;
	v->a[55375] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55376] = aux_sym_concatenation_token1;
	v->a[55377] = anon_sym_DOLLAR;
	v->a[55378] = anon_sym_DQUOTE;
	v->a[55379] = sym_raw_string;
	small_parse_table_2769(v);
}

void	small_parse_table_2769(t_small_parse_table_array *v)
{
	v->a[55380] = sym_number;
	v->a[55381] = anon_sym_DOLLAR_LBRACE;
	v->a[55382] = anon_sym_DOLLAR_LPAREN;
	v->a[55383] = anon_sym_BQUOTE;
	v->a[55384] = sym_word;
	v->a[55385] = 3;
	v->a[55386] = actions(3);
	v->a[55387] = 1;
	v->a[55388] = sym_comment;
	v->a[55389] = actions(1005);
	v->a[55390] = 3;
	v->a[55391] = sym_file_descriptor;
	v->a[55392] = sym__concat;
	v->a[55393] = sym__bare_dollar;
	v->a[55394] = actions(1003);
	v->a[55395] = 23;
	v->a[55396] = anon_sym_PIPE;
	v->a[55397] = anon_sym_AMP_AMP;
	v->a[55398] = anon_sym_PIPE_PIPE;
	v->a[55399] = anon_sym_LT;
	small_parse_table_2770(v);
}

/* EOF small_parse_table_553.c */
