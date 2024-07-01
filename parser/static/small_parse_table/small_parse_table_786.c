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
	v->a[78600] = sym_raw_string;
	v->a[78601] = sym_number;
	v->a[78602] = anon_sym_DOLLAR_LBRACE;
	v->a[78603] = anon_sym_DOLLAR_LPAREN;
	v->a[78604] = anon_sym_BQUOTE;
	v->a[78605] = sym_word;
	v->a[78606] = anon_sym_SEMI;
	v->a[78607] = 9;
	v->a[78608] = actions(754);
	v->a[78609] = 1;
	v->a[78610] = anon_sym_LT_LT;
	v->a[78611] = actions(870);
	v->a[78612] = 1;
	v->a[78613] = sym_comment;
	v->a[78614] = actions(2041);
	v->a[78615] = 1;
	v->a[78616] = sym_file_descriptor;
	v->a[78617] = actions(3057);
	v->a[78618] = 1;
	v->a[78619] = anon_sym_LT_LT_DASH;
	small_parse_table_3931(v);
}

void	small_parse_table_3931(t_small_parse_table_array *v)
{
	v->a[78620] = actions(3051);
	v->a[78621] = 2;
	v->a[78622] = anon_sym_AMP_AMP;
	v->a[78623] = anon_sym_PIPE_PIPE;
	v->a[78624] = actions(3053);
	v->a[78625] = 2;
	v->a[78626] = anon_sym_GT_GT;
	v->a[78627] = anon_sym_GT_PIPE;
	v->a[78628] = actions(3055);
	v->a[78629] = 2;
	v->a[78630] = anon_sym_LT_AMP_DASH;
	v->a[78631] = anon_sym_GT_AMP_DASH;
	v->a[78632] = state(1165);
	v->a[78633] = 3;
	v->a[78634] = sym_file_redirect;
	v->a[78635] = sym_heredoc_redirect;
	v->a[78636] = aux_sym_redirected_statement_repeat1;
	v->a[78637] = actions(2037);
	v->a[78638] = 4;
	v->a[78639] = anon_sym_LT;
	small_parse_table_3932(v);
}

void	small_parse_table_3932(t_small_parse_table_array *v)
{
	v->a[78640] = anon_sym_GT;
	v->a[78641] = anon_sym_LT_AMP;
	v->a[78642] = anon_sym_GT_AMP;
	v->a[78643] = 3;
	v->a[78644] = actions(870);
	v->a[78645] = 1;
	v->a[78646] = sym_comment;
	v->a[78647] = actions(1013);
	v->a[78648] = 6;
	v->a[78649] = anon_sym_PIPE;
	v->a[78650] = anon_sym_LT;
	v->a[78651] = anon_sym_GT;
	v->a[78652] = anon_sym_LT_AMP;
	v->a[78653] = anon_sym_GT_AMP;
	v->a[78654] = anon_sym_LT_LT;
	v->a[78655] = actions(1015);
	v->a[78656] = 10;
	v->a[78657] = sym_file_descriptor;
	v->a[78658] = sym__concat;
	v->a[78659] = anon_sym_AMP_AMP;
	small_parse_table_3933(v);
}

void	small_parse_table_3933(t_small_parse_table_array *v)
{
	v->a[78660] = anon_sym_PIPE_PIPE;
	v->a[78661] = anon_sym_GT_GT;
	v->a[78662] = anon_sym_GT_PIPE;
	v->a[78663] = anon_sym_LT_AMP_DASH;
	v->a[78664] = anon_sym_GT_AMP_DASH;
	v->a[78665] = anon_sym_LT_LT_DASH;
	v->a[78666] = aux_sym_concatenation_token1;
	v->a[78667] = 10;
	v->a[78668] = actions(3);
	v->a[78669] = 1;
	v->a[78670] = sym_comment;
	v->a[78671] = actions(699);
	v->a[78672] = 1;
	v->a[78673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78674] = actions(701);
	v->a[78675] = 1;
	v->a[78676] = anon_sym_DOLLAR;
	v->a[78677] = actions(703);
	v->a[78678] = 1;
	v->a[78679] = anon_sym_DQUOTE;
	small_parse_table_3934(v);
}

void	small_parse_table_3934(t_small_parse_table_array *v)
{
	v->a[78680] = actions(705);
	v->a[78681] = 1;
	v->a[78682] = anon_sym_DOLLAR_LBRACE;
	v->a[78683] = actions(707);
	v->a[78684] = 1;
	v->a[78685] = anon_sym_DOLLAR_LPAREN;
	v->a[78686] = actions(709);
	v->a[78687] = 1;
	v->a[78688] = anon_sym_BQUOTE;
	v->a[78689] = state(216);
	v->a[78690] = 2;
	v->a[78691] = sym_concatenation;
	v->a[78692] = aux_sym_for_statement_repeat1;
	v->a[78693] = actions(697);
	v->a[78694] = 3;
	v->a[78695] = sym_raw_string;
	v->a[78696] = sym_number;
	v->a[78697] = sym_word;
	v->a[78698] = state(520);
	v->a[78699] = 5;
	small_parse_table_3935(v);
}

/* EOF small_parse_table_786.c */
