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
	v->a[78600] = anon_sym_LPAREN_LPAREN;
	v->a[78601] = anon_sym_SEMI;
	v->a[78602] = anon_sym_PIPE_PIPE;
	v->a[78603] = anon_sym_AMP_AMP;
	v->a[78604] = anon_sym_PIPE;
	v->a[78605] = anon_sym_AMP;
	v->a[78606] = anon_sym_LT;
	v->a[78607] = anon_sym_GT;
	v->a[78608] = anon_sym_LT_LT;
	v->a[78609] = anon_sym_GT_GT;
	v->a[78610] = anon_sym_SEMI_SEMI;
	v->a[78611] = anon_sym_SEMI_AMP;
	v->a[78612] = anon_sym_SEMI_SEMI_AMP;
	v->a[78613] = anon_sym_PIPE_AMP;
	v->a[78614] = anon_sym_AMP_GT;
	v->a[78615] = anon_sym_AMP_GT_GT;
	v->a[78616] = anon_sym_LT_AMP;
	v->a[78617] = anon_sym_GT_AMP;
	v->a[78618] = anon_sym_GT_PIPE;
	v->a[78619] = anon_sym_LT_AMP_DASH;
	small_parse_table_3931(v);
}

void	small_parse_table_3931(t_small_parse_table_array *v)
{
	v->a[78620] = anon_sym_GT_AMP_DASH;
	v->a[78621] = anon_sym_LT_LT_DASH;
	v->a[78622] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78623] = anon_sym_DOLLAR_LBRACK;
	v->a[78624] = aux_sym_concatenation_token1;
	v->a[78625] = anon_sym_DOLLAR;
	v->a[78626] = sym__special_character;
	v->a[78627] = anon_sym_DQUOTE;
	v->a[78628] = sym_raw_string;
	v->a[78629] = sym_ansi_c_string;
	v->a[78630] = aux_sym_number_token1;
	v->a[78631] = aux_sym_number_token2;
	v->a[78632] = anon_sym_DOLLAR_LBRACE;
	v->a[78633] = anon_sym_DOLLAR_LPAREN;
	v->a[78634] = anon_sym_BQUOTE;
	v->a[78635] = anon_sym_DOLLAR_BQUOTE;
	v->a[78636] = anon_sym_LT_LPAREN;
	v->a[78637] = anon_sym_GT_LPAREN;
	v->a[78638] = aux_sym__simple_variable_name_token1;
	v->a[78639] = sym_word;
	small_parse_table_3932(v);
}

void	small_parse_table_3932(t_small_parse_table_array *v)
{
	v->a[78640] = 3;
	v->a[78641] = actions(3);
	v->a[78642] = 1;
	v->a[78643] = sym_comment;
	v->a[78644] = actions(5375);
	v->a[78645] = 5;
	v->a[78646] = sym_file_descriptor;
	v->a[78647] = sym_variable_name;
	v->a[78648] = sym_test_operator;
	v->a[78649] = sym__brace_start;
	v->a[78650] = aux_sym_heredoc_redirect_token1;
	v->a[78651] = actions(5373);
	v->a[78652] = 40;
	v->a[78653] = anon_sym_LPAREN_LPAREN;
	v->a[78654] = anon_sym_SEMI;
	v->a[78655] = anon_sym_PIPE_PIPE;
	v->a[78656] = anon_sym_AMP_AMP;
	v->a[78657] = anon_sym_PIPE;
	v->a[78658] = anon_sym_AMP;
	v->a[78659] = anon_sym_LT;
	small_parse_table_3933(v);
}

void	small_parse_table_3933(t_small_parse_table_array *v)
{
	v->a[78660] = anon_sym_GT;
	v->a[78661] = anon_sym_LT_LT;
	v->a[78662] = anon_sym_GT_GT;
	v->a[78663] = anon_sym_esac;
	v->a[78664] = anon_sym_SEMI_SEMI;
	v->a[78665] = anon_sym_SEMI_AMP;
	v->a[78666] = anon_sym_SEMI_SEMI_AMP;
	v->a[78667] = anon_sym_PIPE_AMP;
	v->a[78668] = anon_sym_AMP_GT;
	v->a[78669] = anon_sym_AMP_GT_GT;
	v->a[78670] = anon_sym_LT_AMP;
	v->a[78671] = anon_sym_GT_AMP;
	v->a[78672] = anon_sym_GT_PIPE;
	v->a[78673] = anon_sym_LT_AMP_DASH;
	v->a[78674] = anon_sym_GT_AMP_DASH;
	v->a[78675] = anon_sym_LT_LT_DASH;
	v->a[78676] = anon_sym_LT_LT_LT;
	v->a[78677] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78678] = anon_sym_DOLLAR_LBRACK;
	v->a[78679] = anon_sym_DOLLAR;
	small_parse_table_3934(v);
}

void	small_parse_table_3934(t_small_parse_table_array *v)
{
	v->a[78680] = sym__special_character;
	v->a[78681] = anon_sym_DQUOTE;
	v->a[78682] = sym_raw_string;
	v->a[78683] = sym_ansi_c_string;
	v->a[78684] = aux_sym_number_token1;
	v->a[78685] = aux_sym_number_token2;
	v->a[78686] = anon_sym_DOLLAR_LBRACE;
	v->a[78687] = anon_sym_DOLLAR_LPAREN;
	v->a[78688] = anon_sym_BQUOTE;
	v->a[78689] = anon_sym_DOLLAR_BQUOTE;
	v->a[78690] = anon_sym_LT_LPAREN;
	v->a[78691] = anon_sym_GT_LPAREN;
	v->a[78692] = sym_word;
	v->a[78693] = 3;
	v->a[78694] = actions(3);
	v->a[78695] = 1;
	v->a[78696] = sym_comment;
	v->a[78697] = actions(1330);
	v->a[78698] = 6;
	v->a[78699] = sym_file_descriptor;
	small_parse_table_3935(v);
}

/* EOF small_parse_table_786.c */
