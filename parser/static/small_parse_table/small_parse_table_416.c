/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_416.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2080(t_small_parse_table_array *v)
{
	v->a[41600] = anon_sym_GT;
	v->a[41601] = anon_sym_LT_LT;
	v->a[41602] = anon_sym_GT_GT;
	v->a[41603] = anon_sym_LPAREN;
	v->a[41604] = anon_sym_SEMI_SEMI;
	v->a[41605] = anon_sym_PIPE_AMP;
	v->a[41606] = anon_sym_EQ_TILDE;
	v->a[41607] = anon_sym_AMP_GT;
	v->a[41608] = anon_sym_AMP_GT_GT;
	v->a[41609] = anon_sym_LT_AMP;
	v->a[41610] = anon_sym_GT_AMP;
	v->a[41611] = anon_sym_GT_PIPE;
	v->a[41612] = anon_sym_LT_AMP_DASH;
	v->a[41613] = anon_sym_GT_AMP_DASH;
	v->a[41614] = anon_sym_LT_LT_DASH;
	v->a[41615] = anon_sym_LT_LT_LT;
	v->a[41616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41617] = anon_sym_DOLLAR_LBRACK;
	v->a[41618] = aux_sym_concatenation_token1;
	v->a[41619] = anon_sym_DOLLAR;
	small_parse_table_2081(v);
}

void	small_parse_table_2081(t_small_parse_table_array *v)
{
	v->a[41620] = sym__special_character;
	v->a[41621] = anon_sym_DQUOTE;
	v->a[41622] = sym_raw_string;
	v->a[41623] = sym_ansi_c_string;
	v->a[41624] = aux_sym_number_token1;
	v->a[41625] = aux_sym_number_token2;
	v->a[41626] = anon_sym_DOLLAR_LBRACE;
	v->a[41627] = anon_sym_DOLLAR_LPAREN;
	v->a[41628] = anon_sym_BQUOTE;
	v->a[41629] = anon_sym_DOLLAR_BQUOTE;
	v->a[41630] = anon_sym_LT_LPAREN;
	v->a[41631] = anon_sym_GT_LPAREN;
	v->a[41632] = sym_word;
	v->a[41633] = 6;
	v->a[41634] = actions(3);
	v->a[41635] = 1;
	v->a[41636] = sym_comment;
	v->a[41637] = actions(5080);
	v->a[41638] = 1;
	v->a[41639] = aux_sym_concatenation_token1;
	small_parse_table_2082(v);
}

void	small_parse_table_2082(t_small_parse_table_array *v)
{
	v->a[41640] = actions(5106);
	v->a[41641] = 1;
	v->a[41642] = sym__concat;
	v->a[41643] = state(1065);
	v->a[41644] = 1;
	v->a[41645] = aux_sym_concatenation_repeat1;
	v->a[41646] = actions(1267);
	v->a[41647] = 5;
	v->a[41648] = sym_file_descriptor;
	v->a[41649] = sym_test_operator;
	v->a[41650] = sym__bare_dollar;
	v->a[41651] = sym__brace_start;
	v->a[41652] = aux_sym_heredoc_redirect_token1;
	v->a[41653] = actions(1265);
	v->a[41654] = 40;
	v->a[41655] = anon_sym_LPAREN_LPAREN;
	v->a[41656] = anon_sym_SEMI;
	v->a[41657] = anon_sym_PIPE_PIPE;
	v->a[41658] = anon_sym_AMP_AMP;
	v->a[41659] = anon_sym_PIPE;
	small_parse_table_2083(v);
}

void	small_parse_table_2083(t_small_parse_table_array *v)
{
	v->a[41660] = anon_sym_AMP;
	v->a[41661] = anon_sym_EQ_EQ;
	v->a[41662] = anon_sym_LT;
	v->a[41663] = anon_sym_GT;
	v->a[41664] = anon_sym_LT_LT;
	v->a[41665] = anon_sym_GT_GT;
	v->a[41666] = anon_sym_RPAREN;
	v->a[41667] = anon_sym_SEMI_SEMI;
	v->a[41668] = anon_sym_PIPE_AMP;
	v->a[41669] = anon_sym_EQ_TILDE;
	v->a[41670] = anon_sym_AMP_GT;
	v->a[41671] = anon_sym_AMP_GT_GT;
	v->a[41672] = anon_sym_LT_AMP;
	v->a[41673] = anon_sym_GT_AMP;
	v->a[41674] = anon_sym_GT_PIPE;
	v->a[41675] = anon_sym_LT_AMP_DASH;
	v->a[41676] = anon_sym_GT_AMP_DASH;
	v->a[41677] = anon_sym_LT_LT_DASH;
	v->a[41678] = anon_sym_LT_LT_LT;
	v->a[41679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2084(v);
}

void	small_parse_table_2084(t_small_parse_table_array *v)
{
	v->a[41680] = anon_sym_DOLLAR_LBRACK;
	v->a[41681] = anon_sym_DOLLAR;
	v->a[41682] = sym__special_character;
	v->a[41683] = anon_sym_DQUOTE;
	v->a[41684] = sym_raw_string;
	v->a[41685] = sym_ansi_c_string;
	v->a[41686] = aux_sym_number_token1;
	v->a[41687] = aux_sym_number_token2;
	v->a[41688] = anon_sym_DOLLAR_LBRACE;
	v->a[41689] = anon_sym_DOLLAR_LPAREN;
	v->a[41690] = anon_sym_BQUOTE;
	v->a[41691] = anon_sym_DOLLAR_BQUOTE;
	v->a[41692] = anon_sym_LT_LPAREN;
	v->a[41693] = anon_sym_GT_LPAREN;
	v->a[41694] = sym_word;
	v->a[41695] = 3;
	v->a[41696] = actions(3);
	v->a[41697] = 1;
	v->a[41698] = sym_comment;
	v->a[41699] = actions(1294);
	small_parse_table_2085(v);
}

/* EOF small_parse_table_416.c */
