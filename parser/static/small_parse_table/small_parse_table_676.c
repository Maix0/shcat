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
	v->a[67600] = actions(2500);
	v->a[67601] = 1;
	v->a[67602] = anon_sym_BQUOTE;
	v->a[67603] = actions(2606);
	v->a[67604] = 1;
	v->a[67605] = sym__bare_dollar;
	v->a[67606] = actions(2604);
	v->a[67607] = 5;
	v->a[67608] = aux_sym_concatenation_token1;
	v->a[67609] = sym_raw_string;
	v->a[67610] = sym_number;
	v->a[67611] = sym__comment_word;
	v->a[67612] = sym_word;
	v->a[67613] = state(1104);
	v->a[67614] = 5;
	v->a[67615] = sym_arithmetic_expansion;
	v->a[67616] = sym_string;
	v->a[67617] = sym_simple_expansion;
	v->a[67618] = sym_expansion;
	v->a[67619] = sym_command_substitution;
	small_parse_table_3381(v);
}

void	small_parse_table_3381(t_small_parse_table_array *v)
{
	v->a[67620] = 8;
	v->a[67621] = actions(3);
	v->a[67622] = 1;
	v->a[67623] = sym_comment;
	v->a[67624] = actions(736);
	v->a[67625] = 1;
	v->a[67626] = anon_sym_PIPE;
	v->a[67627] = actions(2436);
	v->a[67628] = 1;
	v->a[67629] = sym_file_descriptor;
	v->a[67630] = actions(2608);
	v->a[67631] = 1;
	v->a[67632] = aux_sym_heredoc_redirect_token1;
	v->a[67633] = actions(744);
	v->a[67634] = 2;
	v->a[67635] = anon_sym_LT_LT;
	v->a[67636] = anon_sym_LT_LT_DASH;
	v->a[67637] = actions(1396);
	v->a[67638] = 2;
	v->a[67639] = anon_sym_AMP_AMP;
	small_parse_table_3382(v);
}

void	small_parse_table_3382(t_small_parse_table_array *v)
{
	v->a[67640] = anon_sym_PIPE_PIPE;
	v->a[67641] = state(1359);
	v->a[67642] = 3;
	v->a[67643] = sym_file_redirect;
	v->a[67644] = sym_heredoc_redirect;
	v->a[67645] = aux_sym_redirected_statement_repeat1;
	v->a[67646] = actions(2432);
	v->a[67647] = 7;
	v->a[67648] = anon_sym_LT;
	v->a[67649] = anon_sym_GT;
	v->a[67650] = anon_sym_GT_GT;
	v->a[67651] = anon_sym_LT_AMP;
	v->a[67652] = anon_sym_GT_AMP;
	v->a[67653] = anon_sym_GT_PIPE;
	v->a[67654] = anon_sym_LT_GT;
	v->a[67655] = 10;
	v->a[67656] = actions(3);
	v->a[67657] = 1;
	v->a[67658] = sym_comment;
	v->a[67659] = actions(668);
	small_parse_table_3383(v);
}

void	small_parse_table_3383(t_small_parse_table_array *v)
{
	v->a[67660] = 1;
	v->a[67661] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67662] = actions(670);
	v->a[67663] = 1;
	v->a[67664] = anon_sym_DOLLAR;
	v->a[67665] = actions(672);
	v->a[67666] = 1;
	v->a[67667] = anon_sym_DQUOTE;
	v->a[67668] = actions(674);
	v->a[67669] = 1;
	v->a[67670] = anon_sym_DOLLAR_LBRACE;
	v->a[67671] = actions(676);
	v->a[67672] = 1;
	v->a[67673] = anon_sym_DOLLAR_LPAREN;
	v->a[67674] = actions(678);
	v->a[67675] = 1;
	v->a[67676] = anon_sym_BQUOTE;
	v->a[67677] = actions(2612);
	v->a[67678] = 1;
	v->a[67679] = sym__bare_dollar;
	small_parse_table_3384(v);
}

void	small_parse_table_3384(t_small_parse_table_array *v)
{
	v->a[67680] = actions(2610);
	v->a[67681] = 5;
	v->a[67682] = aux_sym_concatenation_token1;
	v->a[67683] = sym_raw_string;
	v->a[67684] = sym_number;
	v->a[67685] = sym__comment_word;
	v->a[67686] = sym_word;
	v->a[67687] = state(584);
	v->a[67688] = 5;
	v->a[67689] = sym_arithmetic_expansion;
	v->a[67690] = sym_string;
	v->a[67691] = sym_simple_expansion;
	v->a[67692] = sym_expansion;
	v->a[67693] = sym_command_substitution;
	v->a[67694] = 10;
	v->a[67695] = actions(3);
	v->a[67696] = 1;
	v->a[67697] = sym_comment;
	v->a[67698] = actions(25);
	v->a[67699] = 1;
	small_parse_table_3385(v);
}

/* EOF small_parse_table_676.c */
