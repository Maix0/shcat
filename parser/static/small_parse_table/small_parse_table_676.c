/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_676.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3380(t_small_parse_table_array *v)
{
	v->a[67600] = actions(5664);
	v->a[67601] = 1;
	v->a[67602] = aux_sym_concatenation_token1;
	v->a[67603] = actions(5666);
	v->a[67604] = 1;
	v->a[67605] = sym__concat;
	v->a[67606] = state(1383);
	v->a[67607] = 1;
	v->a[67608] = aux_sym_concatenation_repeat1;
	v->a[67609] = actions(5375);
	v->a[67610] = 5;
	v->a[67611] = sym_file_descriptor;
	v->a[67612] = sym_variable_name;
	v->a[67613] = sym_test_operator;
	v->a[67614] = sym__brace_start;
	v->a[67615] = aux_sym_heredoc_redirect_token1;
	v->a[67616] = actions(5373);
	v->a[67617] = 38;
	v->a[67618] = anon_sym_LPAREN_LPAREN;
	v->a[67619] = anon_sym_SEMI;
	small_parse_table_3381(v);
}

void	small_parse_table_3381(t_small_parse_table_array *v)
{
	v->a[67620] = anon_sym_PIPE_PIPE;
	v->a[67621] = anon_sym_AMP_AMP;
	v->a[67622] = anon_sym_PIPE;
	v->a[67623] = anon_sym_AMP;
	v->a[67624] = anon_sym_LT;
	v->a[67625] = anon_sym_GT;
	v->a[67626] = anon_sym_LT_LT;
	v->a[67627] = anon_sym_GT_GT;
	v->a[67628] = anon_sym_RPAREN;
	v->a[67629] = anon_sym_SEMI_SEMI;
	v->a[67630] = anon_sym_PIPE_AMP;
	v->a[67631] = anon_sym_AMP_GT;
	v->a[67632] = anon_sym_AMP_GT_GT;
	v->a[67633] = anon_sym_LT_AMP;
	v->a[67634] = anon_sym_GT_AMP;
	v->a[67635] = anon_sym_GT_PIPE;
	v->a[67636] = anon_sym_LT_AMP_DASH;
	v->a[67637] = anon_sym_GT_AMP_DASH;
	v->a[67638] = anon_sym_LT_LT_DASH;
	v->a[67639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3382(v);
}

void	small_parse_table_3382(t_small_parse_table_array *v)
{
	v->a[67640] = anon_sym_DOLLAR_LBRACK;
	v->a[67641] = anon_sym_DOLLAR;
	v->a[67642] = sym__special_character;
	v->a[67643] = anon_sym_DQUOTE;
	v->a[67644] = sym_raw_string;
	v->a[67645] = sym_ansi_c_string;
	v->a[67646] = aux_sym_number_token1;
	v->a[67647] = aux_sym_number_token2;
	v->a[67648] = anon_sym_DOLLAR_LBRACE;
	v->a[67649] = anon_sym_DOLLAR_LPAREN;
	v->a[67650] = anon_sym_BQUOTE;
	v->a[67651] = anon_sym_DOLLAR_BQUOTE;
	v->a[67652] = anon_sym_LT_LPAREN;
	v->a[67653] = anon_sym_GT_LPAREN;
	v->a[67654] = aux_sym__simple_variable_name_token1;
	v->a[67655] = sym_word;
	v->a[67656] = 3;
	v->a[67657] = actions(3);
	v->a[67658] = 1;
	v->a[67659] = sym_comment;
	small_parse_table_3383(v);
}

void	small_parse_table_3383(t_small_parse_table_array *v)
{
	v->a[67660] = actions(1298);
	v->a[67661] = 5;
	v->a[67662] = sym_file_descriptor;
	v->a[67663] = sym__concat;
	v->a[67664] = sym_test_operator;
	v->a[67665] = sym__brace_start;
	v->a[67666] = aux_sym_heredoc_redirect_token1;
	v->a[67667] = actions(1296);
	v->a[67668] = 41;
	v->a[67669] = anon_sym_LPAREN_LPAREN;
	v->a[67670] = anon_sym_SEMI;
	v->a[67671] = anon_sym_PIPE_PIPE;
	v->a[67672] = anon_sym_AMP_AMP;
	v->a[67673] = anon_sym_PIPE;
	v->a[67674] = anon_sym_AMP;
	v->a[67675] = anon_sym_LT;
	v->a[67676] = anon_sym_GT;
	v->a[67677] = anon_sym_LT_LT;
	v->a[67678] = anon_sym_GT_GT;
	v->a[67679] = anon_sym_esac;
	small_parse_table_3384(v);
}

void	small_parse_table_3384(t_small_parse_table_array *v)
{
	v->a[67680] = anon_sym_SEMI_SEMI;
	v->a[67681] = anon_sym_SEMI_AMP;
	v->a[67682] = anon_sym_SEMI_SEMI_AMP;
	v->a[67683] = anon_sym_PIPE_AMP;
	v->a[67684] = anon_sym_AMP_GT;
	v->a[67685] = anon_sym_AMP_GT_GT;
	v->a[67686] = anon_sym_LT_AMP;
	v->a[67687] = anon_sym_GT_AMP;
	v->a[67688] = anon_sym_GT_PIPE;
	v->a[67689] = anon_sym_LT_AMP_DASH;
	v->a[67690] = anon_sym_GT_AMP_DASH;
	v->a[67691] = anon_sym_LT_LT_DASH;
	v->a[67692] = anon_sym_LT_LT_LT;
	v->a[67693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67694] = anon_sym_DOLLAR_LBRACK;
	v->a[67695] = aux_sym_concatenation_token1;
	v->a[67696] = anon_sym_DOLLAR;
	v->a[67697] = sym__special_character;
	v->a[67698] = anon_sym_DQUOTE;
	v->a[67699] = sym_raw_string;
	small_parse_table_3385(v);
}

/* EOF small_parse_table_676.c */
