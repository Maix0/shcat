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
	v->a[22600] = 1;
	v->a[22601] = sym_comment;
	v->a[22602] = actions(800);
	v->a[22603] = 13;
	v->a[22604] = anon_sym_PIPE;
	v->a[22605] = anon_sym_EQ;
	v->a[22606] = anon_sym_LT;
	v->a[22607] = anon_sym_GT;
	v->a[22608] = anon_sym_GT_GT;
	v->a[22609] = anon_sym_LT_LT;
	v->a[22610] = anon_sym_CARET;
	v->a[22611] = anon_sym_AMP;
	v->a[22612] = anon_sym_PLUS;
	v->a[22613] = anon_sym_DASH;
	v->a[22614] = anon_sym_STAR;
	v->a[22615] = anon_sym_SLASH;
	v->a[22616] = anon_sym_PERCENT;
	v->a[22617] = actions(802);
	v->a[22618] = 21;
	v->a[22619] = anon_sym_AMP_AMP;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = anon_sym_PIPE_PIPE;
	v->a[22621] = anon_sym_RPAREN_RPAREN;
	v->a[22622] = anon_sym_PLUS_EQ;
	v->a[22623] = anon_sym_DASH_EQ;
	v->a[22624] = anon_sym_STAR_EQ;
	v->a[22625] = anon_sym_SLASH_EQ;
	v->a[22626] = anon_sym_PERCENT_EQ;
	v->a[22627] = anon_sym_LT_LT_EQ;
	v->a[22628] = anon_sym_GT_GT_EQ;
	v->a[22629] = anon_sym_AMP_EQ;
	v->a[22630] = anon_sym_CARET_EQ;
	v->a[22631] = anon_sym_PIPE_EQ;
	v->a[22632] = anon_sym_EQ_EQ;
	v->a[22633] = anon_sym_BANG_EQ;
	v->a[22634] = anon_sym_LT_EQ;
	v->a[22635] = anon_sym_GT_EQ;
	v->a[22636] = anon_sym_QMARK;
	v->a[22637] = anon_sym_COLON;
	v->a[22638] = anon_sym_PLUS_PLUS2;
	v->a[22639] = anon_sym_DASH_DASH2;
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = 12;
	v->a[22641] = actions(3);
	v->a[22642] = 1;
	v->a[22643] = sym_comment;
	v->a[22644] = actions(736);
	v->a[22645] = 1;
	v->a[22646] = anon_sym_PIPE;
	v->a[22647] = actions(746);
	v->a[22648] = 1;
	v->a[22649] = sym_file_descriptor;
	v->a[22650] = actions(804);
	v->a[22651] = 1;
	v->a[22652] = ts_builtin_sym_end;
	v->a[22653] = actions(810);
	v->a[22654] = 1;
	v->a[22655] = sym_variable_name;
	v->a[22656] = state(768);
	v->a[22657] = 1;
	v->a[22658] = sym_terminator;
	v->a[22659] = actions(744);
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = 2;
	v->a[22661] = anon_sym_LT_LT;
	v->a[22662] = anon_sym_LT_LT_DASH;
	v->a[22663] = actions(808);
	v->a[22664] = 2;
	v->a[22665] = anon_sym_AMP_AMP;
	v->a[22666] = anon_sym_PIPE_PIPE;
	v->a[22667] = state(1065);
	v->a[22668] = 2;
	v->a[22669] = sym_variable_assignment;
	v->a[22670] = aux_sym__variable_assignments_repeat1;
	v->a[22671] = state(1073);
	v->a[22672] = 3;
	v->a[22673] = sym_file_redirect;
	v->a[22674] = sym_heredoc_redirect;
	v->a[22675] = aux_sym_redirected_statement_repeat1;
	v->a[22676] = actions(806);
	v->a[22677] = 4;
	v->a[22678] = anon_sym_SEMI_SEMI;
	v->a[22679] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = anon_sym_AMP;
	v->a[22681] = anon_sym_SEMI;
	v->a[22682] = actions(734);
	v->a[22683] = 16;
	v->a[22684] = anon_sym_LT;
	v->a[22685] = anon_sym_GT;
	v->a[22686] = anon_sym_GT_GT;
	v->a[22687] = anon_sym_LT_AMP;
	v->a[22688] = anon_sym_GT_AMP;
	v->a[22689] = anon_sym_GT_PIPE;
	v->a[22690] = anon_sym_LT_GT;
	v->a[22691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22692] = anon_sym_DOLLAR;
	v->a[22693] = anon_sym_DQUOTE;
	v->a[22694] = sym_raw_string;
	v->a[22695] = sym_number;
	v->a[22696] = anon_sym_DOLLAR_LBRACE;
	v->a[22697] = anon_sym_DOLLAR_LPAREN;
	v->a[22698] = anon_sym_BQUOTE;
	v->a[22699] = sym_word;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
