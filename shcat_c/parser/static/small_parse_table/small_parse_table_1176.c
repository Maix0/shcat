/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1176.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5880(t_small_parse_table_array *v)
{
	v->a[117600] = sym_file_descriptor;
	v->a[117601] = sym_variable_name;
	v->a[117602] = sym_test_operator;
	v->a[117603] = sym__brace_start;
	v->a[117604] = aux_sym_heredoc_redirect_token1;
	v->a[117605] = actions(5766);
	v->a[117606] = 38;
	v->a[117607] = anon_sym_LPAREN_LPAREN;
	v->a[117608] = anon_sym_SEMI;
	v->a[117609] = anon_sym_PIPE_PIPE;
	v->a[117610] = anon_sym_AMP_AMP;
	v->a[117611] = anon_sym_PIPE;
	v->a[117612] = anon_sym_AMP;
	v->a[117613] = anon_sym_LT;
	v->a[117614] = anon_sym_GT;
	v->a[117615] = anon_sym_LT_LT;
	v->a[117616] = anon_sym_GT_GT;
	v->a[117617] = anon_sym_RPAREN;
	v->a[117618] = anon_sym_SEMI_SEMI;
	v->a[117619] = anon_sym_PIPE_AMP;
	small_parse_table_5881(v);
}

void	small_parse_table_5881(t_small_parse_table_array *v)
{
	v->a[117620] = anon_sym_AMP_GT;
	v->a[117621] = anon_sym_AMP_GT_GT;
	v->a[117622] = anon_sym_LT_AMP;
	v->a[117623] = anon_sym_GT_AMP;
	v->a[117624] = anon_sym_GT_PIPE;
	v->a[117625] = anon_sym_LT_AMP_DASH;
	v->a[117626] = anon_sym_GT_AMP_DASH;
	v->a[117627] = anon_sym_LT_LT_DASH;
	v->a[117628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117629] = anon_sym_DOLLAR_LBRACK;
	v->a[117630] = anon_sym_DOLLAR;
	v->a[117631] = sym__special_character;
	v->a[117632] = anon_sym_DQUOTE;
	v->a[117633] = sym_raw_string;
	v->a[117634] = sym_ansi_c_string;
	v->a[117635] = aux_sym_number_token1;
	v->a[117636] = aux_sym_number_token2;
	v->a[117637] = anon_sym_DOLLAR_LBRACE;
	v->a[117638] = anon_sym_DOLLAR_LPAREN;
	v->a[117639] = anon_sym_BQUOTE;
	small_parse_table_5882(v);
}

void	small_parse_table_5882(t_small_parse_table_array *v)
{
	v->a[117640] = anon_sym_DOLLAR_BQUOTE;
	v->a[117641] = anon_sym_LT_LPAREN;
	v->a[117642] = anon_sym_GT_LPAREN;
	v->a[117643] = aux_sym__simple_variable_name_token1;
	v->a[117644] = sym_word;
	v->a[117645] = 5;
	v->a[117646] = actions(3);
	v->a[117647] = 1;
	v->a[117648] = sym_comment;
	v->a[117649] = actions(6421);
	v->a[117650] = 1;
	v->a[117651] = sym__special_character;
	v->a[117652] = state(2254);
	v->a[117653] = 1;
	v->a[117654] = aux_sym__literal_repeat1;
	v->a[117655] = actions(1364);
	v->a[117656] = 5;
	v->a[117657] = sym_file_descriptor;
	v->a[117658] = sym_test_operator;
	v->a[117659] = sym__brace_start;
	small_parse_table_5883(v);
}

void	small_parse_table_5883(t_small_parse_table_array *v)
{
	v->a[117660] = ts_builtin_sym_end;
	v->a[117661] = aux_sym_heredoc_redirect_token1;
	v->a[117662] = actions(1362);
	v->a[117663] = 36;
	v->a[117664] = anon_sym_LPAREN_LPAREN;
	v->a[117665] = anon_sym_SEMI;
	v->a[117666] = anon_sym_PIPE_PIPE;
	v->a[117667] = anon_sym_AMP_AMP;
	v->a[117668] = anon_sym_PIPE;
	v->a[117669] = anon_sym_AMP;
	v->a[117670] = anon_sym_LT;
	v->a[117671] = anon_sym_GT;
	v->a[117672] = anon_sym_LT_LT;
	v->a[117673] = anon_sym_GT_GT;
	v->a[117674] = anon_sym_SEMI_SEMI;
	v->a[117675] = anon_sym_PIPE_AMP;
	v->a[117676] = anon_sym_AMP_GT;
	v->a[117677] = anon_sym_AMP_GT_GT;
	v->a[117678] = anon_sym_LT_AMP;
	v->a[117679] = anon_sym_GT_AMP;
	small_parse_table_5884(v);
}

void	small_parse_table_5884(t_small_parse_table_array *v)
{
	v->a[117680] = anon_sym_GT_PIPE;
	v->a[117681] = anon_sym_LT_AMP_DASH;
	v->a[117682] = anon_sym_GT_AMP_DASH;
	v->a[117683] = anon_sym_LT_LT_DASH;
	v->a[117684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117685] = anon_sym_DOLLAR_LBRACK;
	v->a[117686] = anon_sym_DOLLAR;
	v->a[117687] = anon_sym_DQUOTE;
	v->a[117688] = sym_raw_string;
	v->a[117689] = sym_ansi_c_string;
	v->a[117690] = aux_sym_number_token1;
	v->a[117691] = aux_sym_number_token2;
	v->a[117692] = anon_sym_DOLLAR_LBRACE;
	v->a[117693] = anon_sym_DOLLAR_LPAREN;
	v->a[117694] = anon_sym_BQUOTE;
	v->a[117695] = anon_sym_DOLLAR_BQUOTE;
	v->a[117696] = anon_sym_LT_LPAREN;
	v->a[117697] = anon_sym_GT_LPAREN;
	v->a[117698] = aux_sym__simple_variable_name_token1;
	v->a[117699] = sym_word;
	small_parse_table_5885(v);
}

/* EOF small_parse_table_1176.c */
