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
	v->a[41600] = 3;
	v->a[41601] = sym_file_redirect;
	v->a[41602] = sym_heredoc_redirect;
	v->a[41603] = aux_sym_redirected_statement_repeat1;
	v->a[41604] = 10;
	v->a[41605] = actions(3);
	v->a[41606] = 1;
	v->a[41607] = sym_comment;
	v->a[41608] = actions(580);
	v->a[41609] = 1;
	v->a[41610] = anon_sym_PIPE;
	v->a[41611] = actions(584);
	v->a[41612] = 1;
	v->a[41613] = anon_sym_LT_LT;
	v->a[41614] = actions(586);
	v->a[41615] = 1;
	v->a[41616] = anon_sym_SEMI;
	v->a[41617] = actions(1878);
	v->a[41618] = 1;
	v->a[41619] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2081(v);
}

void	small_parse_table_2081(t_small_parse_table_array *v)
{
	v->a[41620] = state(295);
	v->a[41621] = 1;
	v->a[41622] = sym_terminator;
	v->a[41623] = actions(582);
	v->a[41624] = 2;
	v->a[41625] = anon_sym_AMP_AMP;
	v->a[41626] = anon_sym_PIPE_PIPE;
	v->a[41627] = actions(591);
	v->a[41628] = 2;
	v->a[41629] = anon_sym_esac;
	v->a[41630] = anon_sym_SEMI_SEMI;
	v->a[41631] = actions(1876);
	v->a[41632] = 3;
	v->a[41633] = anon_sym_LT;
	v->a[41634] = anon_sym_GT;
	v->a[41635] = anon_sym_GT_GT;
	v->a[41636] = state(971);
	v->a[41637] = 3;
	v->a[41638] = sym_file_redirect;
	v->a[41639] = sym_heredoc_redirect;
	small_parse_table_2082(v);
}

void	small_parse_table_2082(t_small_parse_table_array *v)
{
	v->a[41640] = aux_sym_redirected_statement_repeat1;
	v->a[41641] = 3;
	v->a[41642] = actions(3);
	v->a[41643] = 1;
	v->a[41644] = sym_comment;
	v->a[41645] = actions(1046);
	v->a[41646] = 2;
	v->a[41647] = sym__concat;
	v->a[41648] = sym_variable_name;
	v->a[41649] = actions(1048);
	v->a[41650] = 13;
	v->a[41651] = anon_sym_LT;
	v->a[41652] = anon_sym_GT;
	v->a[41653] = anon_sym_GT_GT;
	v->a[41654] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41655] = aux_sym_concatenation_token1;
	v->a[41656] = anon_sym_DOLLAR;
	v->a[41657] = anon_sym_DQUOTE;
	v->a[41658] = sym_raw_string;
	v->a[41659] = sym_number;
	small_parse_table_2083(v);
}

void	small_parse_table_2083(t_small_parse_table_array *v)
{
	v->a[41660] = anon_sym_DOLLAR_LBRACE;
	v->a[41661] = anon_sym_DOLLAR_LPAREN;
	v->a[41662] = anon_sym_BQUOTE;
	v->a[41663] = sym_word;
	v->a[41664] = 10;
	v->a[41665] = actions(3);
	v->a[41666] = 1;
	v->a[41667] = sym_comment;
	v->a[41668] = actions(580);
	v->a[41669] = 1;
	v->a[41670] = anon_sym_PIPE;
	v->a[41671] = actions(591);
	v->a[41672] = 1;
	v->a[41673] = anon_sym_BQUOTE;
	v->a[41674] = actions(597);
	v->a[41675] = 1;
	v->a[41676] = anon_sym_LT_LT;
	v->a[41677] = actions(1870);
	v->a[41678] = 1;
	v->a[41679] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2084(v);
}

void	small_parse_table_2084(t_small_parse_table_array *v)
{
	v->a[41680] = state(553);
	v->a[41681] = 1;
	v->a[41682] = sym_terminator;
	v->a[41683] = actions(593);
	v->a[41684] = 2;
	v->a[41685] = anon_sym_SEMI_SEMI;
	v->a[41686] = anon_sym_SEMI;
	v->a[41687] = actions(762);
	v->a[41688] = 2;
	v->a[41689] = anon_sym_AMP_AMP;
	v->a[41690] = anon_sym_PIPE_PIPE;
	v->a[41691] = actions(1880);
	v->a[41692] = 3;
	v->a[41693] = anon_sym_LT;
	v->a[41694] = anon_sym_GT;
	v->a[41695] = anon_sym_GT_GT;
	v->a[41696] = state(925);
	v->a[41697] = 3;
	v->a[41698] = sym_file_redirect;
	v->a[41699] = sym_heredoc_redirect;
	small_parse_table_2085(v);
}

/* EOF small_parse_table_416.c */
