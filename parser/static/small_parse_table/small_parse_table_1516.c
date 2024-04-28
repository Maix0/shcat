/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1516.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7580(t_small_parse_table_array *v)
{
	v->a[151600] = anon_sym_GT_EQ;
	v->a[151601] = anon_sym_EQ_TILDE;
	v->a[151602] = anon_sym_QMARK;
	v->a[151603] = anon_sym_COLON;
	v->a[151604] = 5;
	v->a[151605] = actions(71);
	v->a[151606] = 1;
	v->a[151607] = sym_comment;
	v->a[151608] = actions(7120);
	v->a[151609] = 1;
	v->a[151610] = sym__special_character;
	v->a[151611] = state(2867);
	v->a[151612] = 1;
	v->a[151613] = aux_sym__literal_repeat1;
	v->a[151614] = actions(1362);
	v->a[151615] = 12;
	v->a[151616] = anon_sym_PIPE;
	v->a[151617] = anon_sym_LT;
	v->a[151618] = anon_sym_GT;
	v->a[151619] = anon_sym_LT_LT;
	small_parse_table_7581(v);
}

void	small_parse_table_7581(t_small_parse_table_array *v)
{
	v->a[151620] = anon_sym_AMP_GT;
	v->a[151621] = anon_sym_LT_AMP;
	v->a[151622] = anon_sym_GT_AMP;
	v->a[151623] = anon_sym_DOLLAR;
	v->a[151624] = aux_sym_number_token1;
	v->a[151625] = aux_sym_number_token2;
	v->a[151626] = anon_sym_DOLLAR_LPAREN;
	v->a[151627] = sym_word;
	v->a[151628] = actions(1364);
	v->a[151629] = 24;
	v->a[151630] = sym_file_descriptor;
	v->a[151631] = sym_test_operator;
	v->a[151632] = sym__brace_start;
	v->a[151633] = anon_sym_LPAREN_LPAREN;
	v->a[151634] = anon_sym_PIPE_PIPE;
	v->a[151635] = anon_sym_AMP_AMP;
	v->a[151636] = anon_sym_GT_GT;
	v->a[151637] = anon_sym_PIPE_AMP;
	v->a[151638] = anon_sym_AMP_GT_GT;
	v->a[151639] = anon_sym_GT_PIPE;
	small_parse_table_7582(v);
}

void	small_parse_table_7582(t_small_parse_table_array *v)
{
	v->a[151640] = anon_sym_LT_AMP_DASH;
	v->a[151641] = anon_sym_GT_AMP_DASH;
	v->a[151642] = anon_sym_LT_LT_DASH;
	v->a[151643] = anon_sym_LT_LT_LT;
	v->a[151644] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[151645] = anon_sym_DOLLAR_LBRACK;
	v->a[151646] = anon_sym_DQUOTE;
	v->a[151647] = sym_raw_string;
	v->a[151648] = sym_ansi_c_string;
	v->a[151649] = anon_sym_DOLLAR_LBRACE;
	v->a[151650] = anon_sym_BQUOTE;
	v->a[151651] = anon_sym_DOLLAR_BQUOTE;
	v->a[151652] = anon_sym_LT_LPAREN;
	v->a[151653] = anon_sym_GT_LPAREN;
	v->a[151654] = 17;
	v->a[151655] = actions(71);
	v->a[151656] = 1;
	v->a[151657] = sym_comment;
	v->a[151658] = actions(6877);
	v->a[151659] = 1;
	small_parse_table_7583(v);
}

void	small_parse_table_7583(t_small_parse_table_array *v)
{
	v->a[151660] = anon_sym_STAR_STAR;
	v->a[151661] = actions(7037);
	v->a[151662] = 1;
	v->a[151663] = anon_sym_PIPE;
	v->a[151664] = actions(7039);
	v->a[151665] = 1;
	v->a[151666] = anon_sym_CARET;
	v->a[151667] = actions(7041);
	v->a[151668] = 1;
	v->a[151669] = anon_sym_AMP;
	v->a[151670] = actions(7049);
	v->a[151671] = 1;
	v->a[151672] = sym_test_operator;
	v->a[151673] = actions(7072);
	v->a[151674] = 1;
	v->a[151675] = anon_sym_AMP_AMP;
	v->a[151676] = actions(7076);
	v->a[151677] = 1;
	v->a[151678] = anon_sym_PIPE_PIPE;
	v->a[151679] = actions(7123);
	small_parse_table_7584(v);
}

void	small_parse_table_7584(t_small_parse_table_array *v)
{
	v->a[151680] = 1;
	v->a[151681] = anon_sym_EQ;
	v->a[151682] = actions(6869);
	v->a[151683] = 2;
	v->a[151684] = anon_sym_PLUS_PLUS;
	v->a[151685] = anon_sym_DASH_DASH;
	v->a[151686] = actions(6871);
	v->a[151687] = 2;
	v->a[151688] = anon_sym_LT_LT;
	v->a[151689] = anon_sym_GT_GT;
	v->a[151690] = actions(6873);
	v->a[151691] = 2;
	v->a[151692] = anon_sym_PLUS;
	v->a[151693] = anon_sym_DASH;
	v->a[151694] = actions(7043);
	v->a[151695] = 2;
	v->a[151696] = anon_sym_EQ_EQ;
	v->a[151697] = anon_sym_BANG_EQ;
	v->a[151698] = actions(7045);
	v->a[151699] = 2;
	small_parse_table_7585(v);
}

/* EOF small_parse_table_1516.c */
