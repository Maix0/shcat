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
	v->a[41600] = anon_sym_esac;
	v->a[41601] = anon_sym_PIPE;
	v->a[41602] = anon_sym_SEMI_SEMI;
	v->a[41603] = anon_sym_AMP_AMP;
	v->a[41604] = anon_sym_PIPE_PIPE;
	v->a[41605] = anon_sym_LT;
	v->a[41606] = anon_sym_GT;
	v->a[41607] = anon_sym_GT_GT;
	v->a[41608] = anon_sym_LT_AMP;
	v->a[41609] = anon_sym_GT_AMP;
	v->a[41610] = anon_sym_GT_PIPE;
	v->a[41611] = anon_sym_LT_GT;
	v->a[41612] = anon_sym_LT_LT;
	v->a[41613] = anon_sym_LT_LT_DASH;
	v->a[41614] = aux_sym_heredoc_redirect_token1;
	v->a[41615] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41616] = aux_sym_concatenation_token1;
	v->a[41617] = anon_sym_DOLLAR;
	v->a[41618] = anon_sym_DQUOTE;
	v->a[41619] = sym_raw_string;
	small_parse_table_2081(v);
}

void	small_parse_table_2081(t_small_parse_table_array *v)
{
	v->a[41620] = sym_number;
	v->a[41621] = anon_sym_DOLLAR_LBRACE;
	v->a[41622] = anon_sym_DOLLAR_LPAREN;
	v->a[41623] = anon_sym_BQUOTE;
	v->a[41624] = sym_word;
	v->a[41625] = anon_sym_SEMI;
	v->a[41626] = 3;
	v->a[41627] = actions(3);
	v->a[41628] = 1;
	v->a[41629] = sym_comment;
	v->a[41630] = actions(571);
	v->a[41631] = 2;
	v->a[41632] = sym_file_descriptor;
	v->a[41633] = sym__concat;
	v->a[41634] = actions(569);
	v->a[41635] = 26;
	v->a[41636] = anon_sym_PIPE;
	v->a[41637] = anon_sym_RPAREN;
	v->a[41638] = anon_sym_SEMI_SEMI;
	v->a[41639] = anon_sym_AMP_AMP;
	small_parse_table_2082(v);
}

void	small_parse_table_2082(t_small_parse_table_array *v)
{
	v->a[41640] = anon_sym_PIPE_PIPE;
	v->a[41641] = anon_sym_LT;
	v->a[41642] = anon_sym_GT;
	v->a[41643] = anon_sym_GT_GT;
	v->a[41644] = anon_sym_LT_AMP;
	v->a[41645] = anon_sym_GT_AMP;
	v->a[41646] = anon_sym_GT_PIPE;
	v->a[41647] = anon_sym_LT_GT;
	v->a[41648] = anon_sym_LT_LT;
	v->a[41649] = anon_sym_LT_LT_DASH;
	v->a[41650] = aux_sym_heredoc_redirect_token1;
	v->a[41651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41652] = aux_sym_concatenation_token1;
	v->a[41653] = anon_sym_DOLLAR;
	v->a[41654] = anon_sym_DQUOTE;
	v->a[41655] = sym_raw_string;
	v->a[41656] = sym_number;
	v->a[41657] = anon_sym_DOLLAR_LBRACE;
	v->a[41658] = anon_sym_DOLLAR_LPAREN;
	v->a[41659] = anon_sym_BQUOTE;
	small_parse_table_2083(v);
}

void	small_parse_table_2083(t_small_parse_table_array *v)
{
	v->a[41660] = sym_word;
	v->a[41661] = anon_sym_SEMI;
	v->a[41662] = 16;
	v->a[41663] = actions(3);
	v->a[41664] = 1;
	v->a[41665] = sym_comment;
	v->a[41666] = actions(55);
	v->a[41667] = 1;
	v->a[41668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41669] = actions(57);
	v->a[41670] = 1;
	v->a[41671] = anon_sym_DOLLAR;
	v->a[41672] = actions(59);
	v->a[41673] = 1;
	v->a[41674] = anon_sym_DQUOTE;
	v->a[41675] = actions(63);
	v->a[41676] = 1;
	v->a[41677] = anon_sym_DOLLAR_LBRACE;
	v->a[41678] = actions(65);
	v->a[41679] = 1;
	small_parse_table_2084(v);
}

void	small_parse_table_2084(t_small_parse_table_array *v)
{
	v->a[41680] = anon_sym_DOLLAR_LPAREN;
	v->a[41681] = actions(67);
	v->a[41682] = 1;
	v->a[41683] = anon_sym_BQUOTE;
	v->a[41684] = actions(359);
	v->a[41685] = 1;
	v->a[41686] = sym_variable_name;
	v->a[41687] = actions(1095);
	v->a[41688] = 1;
	v->a[41689] = sym_file_descriptor;
	v->a[41690] = state(182);
	v->a[41691] = 1;
	v->a[41692] = sym_command_name;
	v->a[41693] = state(661);
	v->a[41694] = 1;
	v->a[41695] = sym_concatenation;
	v->a[41696] = state(1203);
	v->a[41697] = 1;
	v->a[41698] = sym_file_redirect;
	v->a[41699] = state(968);
	small_parse_table_2085(v);
}

/* EOF small_parse_table_416.c */
