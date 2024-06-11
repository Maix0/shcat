/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_786.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3930(t_small_parse_table_array *v)
{
	v->a[78600] = 1;
	v->a[78601] = sym_comment;
	v->a[78602] = actions(2685);
	v->a[78603] = 1;
	v->a[78604] = aux_sym_heredoc_redirect_token1;
	v->a[78605] = actions(2901);
	v->a[78606] = 1;
	v->a[78607] = sym_file_descriptor;
	v->a[78608] = actions(2598);
	v->a[78609] = 2;
	v->a[78610] = anon_sym_LT_AMP_DASH;
	v->a[78611] = anon_sym_GT_AMP_DASH;
	v->a[78612] = state(1459);
	v->a[78613] = 2;
	v->a[78614] = sym_file_redirect;
	v->a[78615] = aux_sym_redirected_statement_repeat2;
	v->a[78616] = actions(2596);
	v->a[78617] = 8;
	v->a[78618] = anon_sym_LT;
	v->a[78619] = anon_sym_GT;
	small_parse_table_3931(v);
}

void	small_parse_table_3931(t_small_parse_table_array *v)
{
	v->a[78620] = anon_sym_GT_GT;
	v->a[78621] = anon_sym_AMP_GT;
	v->a[78622] = anon_sym_AMP_GT_GT;
	v->a[78623] = anon_sym_LT_AMP;
	v->a[78624] = anon_sym_GT_AMP;
	v->a[78625] = anon_sym_GT_PIPE;
	v->a[78626] = actions(2683);
	v->a[78627] = 8;
	v->a[78628] = anon_sym_PIPE;
	v->a[78629] = anon_sym_SEMI_SEMI;
	v->a[78630] = anon_sym_AMP_AMP;
	v->a[78631] = anon_sym_PIPE_PIPE;
	v->a[78632] = anon_sym_LT_LT;
	v->a[78633] = anon_sym_LT_LT_DASH;
	v->a[78634] = anon_sym_AMP;
	v->a[78635] = anon_sym_SEMI;
	v->a[78636] = 3;
	v->a[78637] = actions(3);
	v->a[78638] = 1;
	v->a[78639] = sym_comment;
	small_parse_table_3932(v);
}

void	small_parse_table_3932(t_small_parse_table_array *v)
{
	v->a[78640] = actions(1175);
	v->a[78641] = 3;
	v->a[78642] = sym_file_descriptor;
	v->a[78643] = sym_variable_name;
	v->a[78644] = aux_sym_heredoc_redirect_token1;
	v->a[78645] = actions(1173);
	v->a[78646] = 19;
	v->a[78647] = anon_sym_esac;
	v->a[78648] = anon_sym_PIPE;
	v->a[78649] = anon_sym_SEMI_SEMI;
	v->a[78650] = anon_sym_AMP_AMP;
	v->a[78651] = anon_sym_PIPE_PIPE;
	v->a[78652] = anon_sym_LT;
	v->a[78653] = anon_sym_GT;
	v->a[78654] = anon_sym_GT_GT;
	v->a[78655] = anon_sym_AMP_GT;
	v->a[78656] = anon_sym_AMP_GT_GT;
	v->a[78657] = anon_sym_LT_AMP;
	v->a[78658] = anon_sym_GT_AMP;
	v->a[78659] = anon_sym_GT_PIPE;
	small_parse_table_3933(v);
}

void	small_parse_table_3933(t_small_parse_table_array *v)
{
	v->a[78660] = anon_sym_LT_AMP_DASH;
	v->a[78661] = anon_sym_GT_AMP_DASH;
	v->a[78662] = anon_sym_LT_LT;
	v->a[78663] = anon_sym_LT_LT_DASH;
	v->a[78664] = anon_sym_AMP;
	v->a[78665] = anon_sym_SEMI;
	v->a[78666] = 9;
	v->a[78667] = actions(3);
	v->a[78668] = 1;
	v->a[78669] = sym_comment;
	v->a[78670] = actions(2600);
	v->a[78671] = 1;
	v->a[78672] = aux_sym_heredoc_redirect_token1;
	v->a[78673] = actions(2602);
	v->a[78674] = 1;
	v->a[78675] = sym_file_descriptor;
	v->a[78676] = actions(861);
	v->a[78677] = 2;
	v->a[78678] = anon_sym_LT_LT;
	v->a[78679] = anon_sym_LT_LT_DASH;
	small_parse_table_3934(v);
}

void	small_parse_table_3934(t_small_parse_table_array *v)
{
	v->a[78680] = actions(965);
	v->a[78681] = 2;
	v->a[78682] = anon_sym_AMP_AMP;
	v->a[78683] = anon_sym_PIPE_PIPE;
	v->a[78684] = actions(2598);
	v->a[78685] = 2;
	v->a[78686] = anon_sym_LT_AMP_DASH;
	v->a[78687] = anon_sym_GT_AMP_DASH;
	v->a[78688] = actions(1041);
	v->a[78689] = 3;
	v->a[78690] = anon_sym_SEMI_SEMI;
	v->a[78691] = anon_sym_AMP;
	v->a[78692] = anon_sym_SEMI;
	v->a[78693] = state(1322);
	v->a[78694] = 3;
	v->a[78695] = sym_file_redirect;
	v->a[78696] = sym_heredoc_redirect;
	v->a[78697] = aux_sym_redirected_statement_repeat1;
	v->a[78698] = actions(2596);
	v->a[78699] = 8;
	small_parse_table_3935(v);
}

/* EOF small_parse_table_786.c */
