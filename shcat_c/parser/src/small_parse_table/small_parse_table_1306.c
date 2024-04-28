/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1306.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6530(t_small_parse_table_array *v)
{
	v->a[130600] = anon_sym_STAR;
	v->a[130601] = anon_sym_SLASH;
	v->a[130602] = anon_sym_PERCENT;
	v->a[130603] = anon_sym_STAR_STAR;
	v->a[130604] = actions(354);
	v->a[130605] = 24;
	v->a[130606] = sym_test_operator;
	v->a[130607] = anon_sym_RPAREN_RPAREN;
	v->a[130608] = anon_sym_PLUS_PLUS;
	v->a[130609] = anon_sym_DASH_DASH;
	v->a[130610] = anon_sym_PLUS_EQ;
	v->a[130611] = anon_sym_DASH_EQ;
	v->a[130612] = anon_sym_STAR_EQ;
	v->a[130613] = anon_sym_SLASH_EQ;
	v->a[130614] = anon_sym_PERCENT_EQ;
	v->a[130615] = anon_sym_STAR_STAR_EQ;
	v->a[130616] = anon_sym_LT_LT_EQ;
	v->a[130617] = anon_sym_GT_GT_EQ;
	v->a[130618] = anon_sym_AMP_EQ;
	v->a[130619] = anon_sym_CARET_EQ;
	small_parse_table_6531(v);
}

void	small_parse_table_6531(t_small_parse_table_array *v)
{
	v->a[130620] = anon_sym_PIPE_EQ;
	v->a[130621] = anon_sym_PIPE_PIPE;
	v->a[130622] = anon_sym_AMP_AMP;
	v->a[130623] = anon_sym_EQ_EQ;
	v->a[130624] = anon_sym_BANG_EQ;
	v->a[130625] = anon_sym_LT_EQ;
	v->a[130626] = anon_sym_GT_EQ;
	v->a[130627] = anon_sym_EQ_TILDE;
	v->a[130628] = anon_sym_QMARK;
	v->a[130629] = anon_sym_COLON;
	v->a[130630] = 3;
	v->a[130631] = actions(71);
	v->a[130632] = 1;
	v->a[130633] = sym_comment;
	v->a[130634] = actions(1320);
	v->a[130635] = 14;
	v->a[130636] = anon_sym_EQ;
	v->a[130637] = anon_sym_PIPE;
	v->a[130638] = anon_sym_CARET;
	v->a[130639] = anon_sym_AMP;
	small_parse_table_6532(v);
}

void	small_parse_table_6532(t_small_parse_table_array *v)
{
	v->a[130640] = anon_sym_LT;
	v->a[130641] = anon_sym_GT;
	v->a[130642] = anon_sym_LT_LT;
	v->a[130643] = anon_sym_GT_GT;
	v->a[130644] = anon_sym_PLUS;
	v->a[130645] = anon_sym_DASH;
	v->a[130646] = anon_sym_STAR;
	v->a[130647] = anon_sym_SLASH;
	v->a[130648] = anon_sym_PERCENT;
	v->a[130649] = anon_sym_STAR_STAR;
	v->a[130650] = actions(1322);
	v->a[130651] = 26;
	v->a[130652] = sym_test_operator;
	v->a[130653] = sym_extglob_pattern;
	v->a[130654] = anon_sym_RPAREN_RPAREN;
	v->a[130655] = anon_sym_PLUS_PLUS;
	v->a[130656] = anon_sym_DASH_DASH;
	v->a[130657] = anon_sym_PLUS_EQ;
	v->a[130658] = anon_sym_DASH_EQ;
	v->a[130659] = anon_sym_STAR_EQ;
	small_parse_table_6533(v);
}

void	small_parse_table_6533(t_small_parse_table_array *v)
{
	v->a[130660] = anon_sym_SLASH_EQ;
	v->a[130661] = anon_sym_PERCENT_EQ;
	v->a[130662] = anon_sym_STAR_STAR_EQ;
	v->a[130663] = anon_sym_LT_LT_EQ;
	v->a[130664] = anon_sym_GT_GT_EQ;
	v->a[130665] = anon_sym_AMP_EQ;
	v->a[130666] = anon_sym_CARET_EQ;
	v->a[130667] = anon_sym_PIPE_EQ;
	v->a[130668] = anon_sym_PIPE_PIPE;
	v->a[130669] = anon_sym_AMP_AMP;
	v->a[130670] = anon_sym_EQ_EQ;
	v->a[130671] = anon_sym_BANG_EQ;
	v->a[130672] = anon_sym_LT_EQ;
	v->a[130673] = anon_sym_GT_EQ;
	v->a[130674] = anon_sym_RBRACK_RBRACK;
	v->a[130675] = anon_sym_EQ_TILDE;
	v->a[130676] = anon_sym_QMARK;
	v->a[130677] = anon_sym_COLON;
	v->a[130678] = 5;
	v->a[130679] = actions(71);
	small_parse_table_6534(v);
}

void	small_parse_table_6534(t_small_parse_table_array *v)
{
	v->a[130680] = 1;
	v->a[130681] = sym_comment;
	v->a[130682] = state(2486);
	v->a[130683] = 1;
	v->a[130684] = aux_sym_concatenation_repeat1;
	v->a[130685] = actions(6697);
	v->a[130686] = 2;
	v->a[130687] = sym__concat;
	v->a[130688] = aux_sym_concatenation_token1;
	v->a[130689] = actions(1251);
	v->a[130690] = 14;
	v->a[130691] = anon_sym_PIPE;
	v->a[130692] = anon_sym_LT;
	v->a[130693] = anon_sym_GT;
	v->a[130694] = anon_sym_LT_LT;
	v->a[130695] = anon_sym_AMP_GT;
	v->a[130696] = anon_sym_LT_AMP;
	v->a[130697] = anon_sym_GT_AMP;
	v->a[130698] = anon_sym_DOLLAR;
	v->a[130699] = sym__special_character;
	small_parse_table_6535(v);
}

/* EOF small_parse_table_1306.c */
