/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_956.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4780(t_small_parse_table_array *v)
{
	v->a[95600] = 1;
	v->a[95601] = sym_comment;
	v->a[95602] = actions(5191);
	v->a[95603] = 1;
	v->a[95604] = aux_sym_concatenation_token1;
	v->a[95605] = actions(5193);
	v->a[95606] = 1;
	v->a[95607] = sym__concat;
	v->a[95608] = state(2006);
	v->a[95609] = 1;
	v->a[95610] = aux_sym_concatenation_repeat1;
	v->a[95611] = actions(1390);
	v->a[95612] = 2;
	v->a[95613] = sym_file_descriptor;
	v->a[95614] = aux_sym_heredoc_redirect_token1;
	v->a[95615] = actions(1388);
	v->a[95616] = 21;
	v->a[95617] = anon_sym_PIPE;
	v->a[95618] = anon_sym_SEMI_SEMI;
	v->a[95619] = anon_sym_SEMI_AMP;
	small_parse_table_4781(v);
}

void	small_parse_table_4781(t_small_parse_table_array *v)
{
	v->a[95620] = anon_sym_SEMI_SEMI_AMP;
	v->a[95621] = anon_sym_PIPE_AMP;
	v->a[95622] = anon_sym_AMP_AMP;
	v->a[95623] = anon_sym_PIPE_PIPE;
	v->a[95624] = anon_sym_LT;
	v->a[95625] = anon_sym_GT;
	v->a[95626] = anon_sym_GT_GT;
	v->a[95627] = anon_sym_AMP_GT;
	v->a[95628] = anon_sym_AMP_GT_GT;
	v->a[95629] = anon_sym_LT_AMP;
	v->a[95630] = anon_sym_GT_AMP;
	v->a[95631] = anon_sym_GT_PIPE;
	v->a[95632] = anon_sym_LT_AMP_DASH;
	v->a[95633] = anon_sym_GT_AMP_DASH;
	v->a[95634] = anon_sym_LT_LT;
	v->a[95635] = anon_sym_LT_LT_DASH;
	v->a[95636] = anon_sym_AMP;
	v->a[95637] = anon_sym_SEMI;
	v->a[95638] = 7;
	v->a[95639] = actions(3);
	small_parse_table_4782(v);
}

void	small_parse_table_4782(t_small_parse_table_array *v)
{
	v->a[95640] = 1;
	v->a[95641] = sym_comment;
	v->a[95642] = actions(5256);
	v->a[95643] = 1;
	v->a[95644] = aux_sym_heredoc_redirect_token1;
	v->a[95645] = actions(5258);
	v->a[95646] = 1;
	v->a[95647] = sym_file_descriptor;
	v->a[95648] = actions(5155);
	v->a[95649] = 2;
	v->a[95650] = anon_sym_LT_AMP_DASH;
	v->a[95651] = anon_sym_GT_AMP_DASH;
	v->a[95652] = state(1990);
	v->a[95653] = 2;
	v->a[95654] = sym_file_redirect;
	v->a[95655] = aux_sym_redirected_statement_repeat2;
	v->a[95656] = actions(5153);
	v->a[95657] = 8;
	v->a[95658] = anon_sym_LT;
	v->a[95659] = anon_sym_GT;
	small_parse_table_4783(v);
}

void	small_parse_table_4783(t_small_parse_table_array *v)
{
	v->a[95660] = anon_sym_GT_GT;
	v->a[95661] = anon_sym_AMP_GT;
	v->a[95662] = anon_sym_AMP_GT_GT;
	v->a[95663] = anon_sym_LT_AMP;
	v->a[95664] = anon_sym_GT_AMP;
	v->a[95665] = anon_sym_GT_PIPE;
	v->a[95666] = actions(5254);
	v->a[95667] = 12;
	v->a[95668] = anon_sym_esac;
	v->a[95669] = anon_sym_PIPE;
	v->a[95670] = anon_sym_SEMI_SEMI;
	v->a[95671] = anon_sym_SEMI_AMP;
	v->a[95672] = anon_sym_SEMI_SEMI_AMP;
	v->a[95673] = anon_sym_PIPE_AMP;
	v->a[95674] = anon_sym_AMP_AMP;
	v->a[95675] = anon_sym_PIPE_PIPE;
	v->a[95676] = anon_sym_LT_LT;
	v->a[95677] = anon_sym_LT_LT_DASH;
	v->a[95678] = anon_sym_AMP;
	v->a[95679] = anon_sym_SEMI;
	small_parse_table_4784(v);
}

void	small_parse_table_4784(t_small_parse_table_array *v)
{
	v->a[95680] = 3;
	v->a[95681] = actions(3);
	v->a[95682] = 1;
	v->a[95683] = sym_comment;
	v->a[95684] = actions(3034);
	v->a[95685] = 3;
	v->a[95686] = sym_file_descriptor;
	v->a[95687] = sym__concat;
	v->a[95688] = aux_sym_heredoc_redirect_token1;
	v->a[95689] = actions(3032);
	v->a[95690] = 23;
	v->a[95691] = anon_sym_esac;
	v->a[95692] = anon_sym_PIPE;
	v->a[95693] = anon_sym_SEMI_SEMI;
	v->a[95694] = anon_sym_SEMI_AMP;
	v->a[95695] = anon_sym_SEMI_SEMI_AMP;
	v->a[95696] = anon_sym_PIPE_AMP;
	v->a[95697] = anon_sym_AMP_AMP;
	v->a[95698] = anon_sym_PIPE_PIPE;
	v->a[95699] = anon_sym_LT;
	small_parse_table_4785(v);
}

/* EOF small_parse_table_956.c */
