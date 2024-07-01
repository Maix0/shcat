/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_226.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1130(t_small_parse_table_array *v)
{
	v->a[22600] = actions(575);
	v->a[22601] = 1;
	v->a[22602] = sym_file_descriptor;
	v->a[22603] = actions(699);
	v->a[22604] = 1;
	v->a[22605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22606] = actions(701);
	v->a[22607] = 1;
	v->a[22608] = anon_sym_DOLLAR;
	v->a[22609] = actions(703);
	v->a[22610] = 1;
	v->a[22611] = anon_sym_DQUOTE;
	v->a[22612] = actions(705);
	v->a[22613] = 1;
	v->a[22614] = anon_sym_DOLLAR_LBRACE;
	v->a[22615] = actions(707);
	v->a[22616] = 1;
	v->a[22617] = anon_sym_DOLLAR_LPAREN;
	v->a[22618] = actions(709);
	v->a[22619] = 1;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = anon_sym_BQUOTE;
	v->a[22621] = state(242);
	v->a[22622] = 2;
	v->a[22623] = sym_concatenation;
	v->a[22624] = aux_sym_for_statement_repeat1;
	v->a[22625] = actions(697);
	v->a[22626] = 3;
	v->a[22627] = sym_raw_string;
	v->a[22628] = sym_number;
	v->a[22629] = sym_word;
	v->a[22630] = state(520);
	v->a[22631] = 5;
	v->a[22632] = sym_arithmetic_expansion;
	v->a[22633] = sym_string;
	v->a[22634] = sym_simple_expansion;
	v->a[22635] = sym_expansion;
	v->a[22636] = sym_command_substitution;
	v->a[22637] = actions(573);
	v->a[22638] = 18;
	v->a[22639] = anon_sym_PIPE;
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = anon_sym_RPAREN;
	v->a[22641] = anon_sym_SEMI_SEMI;
	v->a[22642] = anon_sym_AMP_AMP;
	v->a[22643] = anon_sym_PIPE_PIPE;
	v->a[22644] = anon_sym_LT;
	v->a[22645] = anon_sym_GT;
	v->a[22646] = anon_sym_GT_GT;
	v->a[22647] = anon_sym_LT_AMP;
	v->a[22648] = anon_sym_GT_AMP;
	v->a[22649] = anon_sym_GT_PIPE;
	v->a[22650] = anon_sym_LT_AMP_DASH;
	v->a[22651] = anon_sym_GT_AMP_DASH;
	v->a[22652] = anon_sym_LT_LT;
	v->a[22653] = anon_sym_LT_LT_DASH;
	v->a[22654] = aux_sym_heredoc_redirect_token1;
	v->a[22655] = anon_sym_AMP;
	v->a[22656] = anon_sym_SEMI;
	v->a[22657] = 12;
	v->a[22658] = actions(3);
	v->a[22659] = 1;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = sym_comment;
	v->a[22661] = actions(602);
	v->a[22662] = 1;
	v->a[22663] = sym_file_descriptor;
	v->a[22664] = actions(699);
	v->a[22665] = 1;
	v->a[22666] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22667] = actions(701);
	v->a[22668] = 1;
	v->a[22669] = anon_sym_DOLLAR;
	v->a[22670] = actions(703);
	v->a[22671] = 1;
	v->a[22672] = anon_sym_DQUOTE;
	v->a[22673] = actions(705);
	v->a[22674] = 1;
	v->a[22675] = anon_sym_DOLLAR_LBRACE;
	v->a[22676] = actions(707);
	v->a[22677] = 1;
	v->a[22678] = anon_sym_DOLLAR_LPAREN;
	v->a[22679] = actions(709);
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = 1;
	v->a[22681] = anon_sym_BQUOTE;
	v->a[22682] = state(242);
	v->a[22683] = 2;
	v->a[22684] = sym_concatenation;
	v->a[22685] = aux_sym_for_statement_repeat1;
	v->a[22686] = actions(697);
	v->a[22687] = 3;
	v->a[22688] = sym_raw_string;
	v->a[22689] = sym_number;
	v->a[22690] = sym_word;
	v->a[22691] = state(520);
	v->a[22692] = 5;
	v->a[22693] = sym_arithmetic_expansion;
	v->a[22694] = sym_string;
	v->a[22695] = sym_simple_expansion;
	v->a[22696] = sym_expansion;
	v->a[22697] = sym_command_substitution;
	v->a[22698] = actions(604);
	v->a[22699] = 18;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
