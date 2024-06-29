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
	v->a[78600] = actions(3);
	v->a[78601] = 1;
	v->a[78602] = sym_comment;
	v->a[78603] = actions(2695);
	v->a[78604] = 1;
	v->a[78605] = aux_sym_concatenation_token1;
	v->a[78606] = actions(2697);
	v->a[78607] = 1;
	v->a[78608] = sym__concat;
	v->a[78609] = state(1569);
	v->a[78610] = 1;
	v->a[78611] = aux_sym_concatenation_repeat1;
	v->a[78612] = actions(538);
	v->a[78613] = 2;
	v->a[78614] = sym_file_descriptor;
	v->a[78615] = aux_sym_heredoc_redirect_token1;
	v->a[78616] = actions(540);
	v->a[78617] = 12;
	v->a[78618] = anon_sym_AMP_AMP;
	v->a[78619] = anon_sym_PIPE_PIPE;
	small_parse_table_3931(v);
}

void	small_parse_table_3931(t_small_parse_table_array *v)
{
	v->a[78620] = anon_sym_LT;
	v->a[78621] = anon_sym_GT;
	v->a[78622] = anon_sym_GT_GT;
	v->a[78623] = anon_sym_AMP_GT;
	v->a[78624] = anon_sym_AMP_GT_GT;
	v->a[78625] = anon_sym_LT_AMP;
	v->a[78626] = anon_sym_GT_AMP;
	v->a[78627] = anon_sym_GT_PIPE;
	v->a[78628] = anon_sym_LT_AMP_DASH;
	v->a[78629] = anon_sym_GT_AMP_DASH;
	v->a[78630] = 12;
	v->a[78631] = actions(3);
	v->a[78632] = 1;
	v->a[78633] = sym_comment;
	v->a[78634] = actions(2809);
	v->a[78635] = 1;
	v->a[78636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78637] = actions(2813);
	v->a[78638] = 1;
	v->a[78639] = anon_sym_DQUOTE;
	small_parse_table_3932(v);
}

void	small_parse_table_3932(t_small_parse_table_array *v)
{
	v->a[78640] = actions(2815);
	v->a[78641] = 1;
	v->a[78642] = anon_sym_DOLLAR_LBRACE;
	v->a[78643] = actions(2817);
	v->a[78644] = 1;
	v->a[78645] = anon_sym_DOLLAR_LPAREN;
	v->a[78646] = actions(2819);
	v->a[78647] = 1;
	v->a[78648] = anon_sym_BQUOTE;
	v->a[78649] = actions(2841);
	v->a[78650] = 1;
	v->a[78651] = anon_sym_DOLLAR;
	v->a[78652] = actions(2843);
	v->a[78653] = 1;
	v->a[78654] = sym__comment_word;
	v->a[78655] = actions(2845);
	v->a[78656] = 1;
	v->a[78657] = sym__empty_value;
	v->a[78658] = state(1101);
	v->a[78659] = 1;
	small_parse_table_3933(v);
}

void	small_parse_table_3933(t_small_parse_table_array *v)
{
	v->a[78660] = sym_concatenation;
	v->a[78661] = actions(2839);
	v->a[78662] = 3;
	v->a[78663] = sym_raw_string;
	v->a[78664] = sym_number;
	v->a[78665] = sym_word;
	v->a[78666] = state(1329);
	v->a[78667] = 5;
	v->a[78668] = sym_arithmetic_expansion;
	v->a[78669] = sym_string;
	v->a[78670] = sym_simple_expansion;
	v->a[78671] = sym_expansion;
	v->a[78672] = sym_command_substitution;
	v->a[78673] = 10;
	v->a[78674] = actions(3);
	v->a[78675] = 1;
	v->a[78676] = sym_comment;
	v->a[78677] = actions(461);
	v->a[78678] = 1;
	v->a[78679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3934(v);
}

void	small_parse_table_3934(t_small_parse_table_array *v)
{
	v->a[78680] = actions(463);
	v->a[78681] = 1;
	v->a[78682] = anon_sym_DOLLAR;
	v->a[78683] = actions(465);
	v->a[78684] = 1;
	v->a[78685] = anon_sym_DQUOTE;
	v->a[78686] = actions(467);
	v->a[78687] = 1;
	v->a[78688] = anon_sym_DOLLAR_LBRACE;
	v->a[78689] = actions(469);
	v->a[78690] = 1;
	v->a[78691] = anon_sym_DOLLAR_LPAREN;
	v->a[78692] = actions(471);
	v->a[78693] = 1;
	v->a[78694] = anon_sym_BQUOTE;
	v->a[78695] = actions(2849);
	v->a[78696] = 1;
	v->a[78697] = sym__bare_dollar;
	v->a[78698] = actions(2847);
	v->a[78699] = 5;
	small_parse_table_3935(v);
}

/* EOF small_parse_table_786.c */
