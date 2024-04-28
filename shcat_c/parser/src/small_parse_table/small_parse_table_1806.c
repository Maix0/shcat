/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1806.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9030(t_small_parse_table_array *v)
{
	v->a[180600] = anon_sym_PLUS_EQ;
	v->a[180601] = anon_sym_DASH_EQ;
	v->a[180602] = anon_sym_STAR_EQ;
	v->a[180603] = anon_sym_SLASH_EQ;
	v->a[180604] = anon_sym_PERCENT_EQ;
	v->a[180605] = anon_sym_STAR_STAR_EQ;
	v->a[180606] = anon_sym_LT_LT_EQ;
	v->a[180607] = anon_sym_GT_GT_EQ;
	v->a[180608] = anon_sym_AMP_EQ;
	v->a[180609] = anon_sym_CARET_EQ;
	v->a[180610] = anon_sym_PIPE_EQ;
	v->a[180611] = anon_sym_EQ_TILDE;
	v->a[180612] = anon_sym_QMARK;
	v->a[180613] = 3;
	v->a[180614] = actions(71);
	v->a[180615] = 1;
	v->a[180616] = sym_comment;
	v->a[180617] = actions(7064);
	v->a[180618] = 14;
	v->a[180619] = anon_sym_EQ;
	small_parse_table_9031(v);
}

void	small_parse_table_9031(t_small_parse_table_array *v)
{
	v->a[180620] = anon_sym_PIPE;
	v->a[180621] = anon_sym_CARET;
	v->a[180622] = anon_sym_AMP;
	v->a[180623] = anon_sym_LT;
	v->a[180624] = anon_sym_GT;
	v->a[180625] = anon_sym_LT_LT;
	v->a[180626] = anon_sym_GT_GT;
	v->a[180627] = anon_sym_PLUS;
	v->a[180628] = anon_sym_DASH;
	v->a[180629] = anon_sym_STAR;
	v->a[180630] = anon_sym_SLASH;
	v->a[180631] = anon_sym_PERCENT;
	v->a[180632] = anon_sym_STAR_STAR;
	v->a[180633] = actions(7062);
	v->a[180634] = 22;
	v->a[180635] = anon_sym_PLUS_PLUS;
	v->a[180636] = anon_sym_DASH_DASH;
	v->a[180637] = anon_sym_PLUS_EQ;
	v->a[180638] = anon_sym_DASH_EQ;
	v->a[180639] = anon_sym_STAR_EQ;
	small_parse_table_9032(v);
}

void	small_parse_table_9032(t_small_parse_table_array *v)
{
	v->a[180640] = anon_sym_SLASH_EQ;
	v->a[180641] = anon_sym_PERCENT_EQ;
	v->a[180642] = anon_sym_STAR_STAR_EQ;
	v->a[180643] = anon_sym_LT_LT_EQ;
	v->a[180644] = anon_sym_GT_GT_EQ;
	v->a[180645] = anon_sym_AMP_EQ;
	v->a[180646] = anon_sym_CARET_EQ;
	v->a[180647] = anon_sym_PIPE_EQ;
	v->a[180648] = anon_sym_PIPE_PIPE;
	v->a[180649] = anon_sym_AMP_AMP;
	v->a[180650] = anon_sym_EQ_EQ;
	v->a[180651] = anon_sym_BANG_EQ;
	v->a[180652] = anon_sym_LT_EQ;
	v->a[180653] = anon_sym_GT_EQ;
	v->a[180654] = anon_sym_RPAREN;
	v->a[180655] = anon_sym_EQ_TILDE;
	v->a[180656] = anon_sym_QMARK;
	v->a[180657] = 3;
	v->a[180658] = actions(3);
	v->a[180659] = 1;
	small_parse_table_9033(v);
}

void	small_parse_table_9033(t_small_parse_table_array *v)
{
	v->a[180660] = sym_comment;
	v->a[180661] = actions(1302);
	v->a[180662] = 5;
	v->a[180663] = sym_file_descriptor;
	v->a[180664] = sym__concat;
	v->a[180665] = sym_test_operator;
	v->a[180666] = sym__brace_start;
	v->a[180667] = aux_sym_heredoc_redirect_token1;
	v->a[180668] = actions(1300);
	v->a[180669] = 31;
	v->a[180670] = anon_sym_LPAREN_LPAREN;
	v->a[180671] = anon_sym_PIPE_PIPE;
	v->a[180672] = anon_sym_AMP_AMP;
	v->a[180673] = anon_sym_LT;
	v->a[180674] = anon_sym_GT;
	v->a[180675] = anon_sym_GT_GT;
	v->a[180676] = anon_sym_AMP_GT;
	v->a[180677] = anon_sym_AMP_GT_GT;
	v->a[180678] = anon_sym_LT_AMP;
	v->a[180679] = anon_sym_GT_AMP;
	small_parse_table_9034(v);
}

void	small_parse_table_9034(t_small_parse_table_array *v)
{
	v->a[180680] = anon_sym_GT_PIPE;
	v->a[180681] = anon_sym_LT_AMP_DASH;
	v->a[180682] = anon_sym_GT_AMP_DASH;
	v->a[180683] = anon_sym_LT_LT_LT;
	v->a[180684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[180685] = anon_sym_DOLLAR_LBRACK;
	v->a[180686] = aux_sym_concatenation_token1;
	v->a[180687] = anon_sym_DOLLAR;
	v->a[180688] = sym__special_character;
	v->a[180689] = anon_sym_DQUOTE;
	v->a[180690] = sym_raw_string;
	v->a[180691] = sym_ansi_c_string;
	v->a[180692] = aux_sym_number_token1;
	v->a[180693] = aux_sym_number_token2;
	v->a[180694] = anon_sym_DOLLAR_LBRACE;
	v->a[180695] = anon_sym_DOLLAR_LPAREN;
	v->a[180696] = anon_sym_BQUOTE;
	v->a[180697] = anon_sym_DOLLAR_BQUOTE;
	v->a[180698] = anon_sym_LT_LPAREN;
	v->a[180699] = anon_sym_GT_LPAREN;
	small_parse_table_9035(v);
}

/* EOF small_parse_table_1806.c */
