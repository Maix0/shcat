/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1846.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9230(t_small_parse_table_array *v)
{
	v->a[184600] = actions(71);
	v->a[184601] = 1;
	v->a[184602] = sym_comment;
	v->a[184603] = actions(7595);
	v->a[184604] = 1;
	v->a[184605] = anon_sym_STAR_STAR;
	v->a[184606] = actions(7569);
	v->a[184607] = 2;
	v->a[184608] = anon_sym_PLUS_PLUS;
	v->a[184609] = anon_sym_DASH_DASH;
	v->a[184610] = actions(7589);
	v->a[184611] = 2;
	v->a[184612] = anon_sym_LT_LT;
	v->a[184613] = anon_sym_GT_GT;
	v->a[184614] = actions(7591);
	v->a[184615] = 2;
	v->a[184616] = anon_sym_PLUS;
	v->a[184617] = anon_sym_DASH;
	v->a[184618] = actions(7593);
	v->a[184619] = 3;
	small_parse_table_9231(v);
}

void	small_parse_table_9231(t_small_parse_table_array *v)
{
	v->a[184620] = anon_sym_STAR;
	v->a[184621] = anon_sym_SLASH;
	v->a[184622] = anon_sym_PERCENT;
	v->a[184623] = actions(7139);
	v->a[184624] = 6;
	v->a[184625] = anon_sym_EQ;
	v->a[184626] = anon_sym_PIPE;
	v->a[184627] = anon_sym_CARET;
	v->a[184628] = anon_sym_AMP;
	v->a[184629] = anon_sym_LT;
	v->a[184630] = anon_sym_GT;
	v->a[184631] = actions(7137);
	v->a[184632] = 20;
	v->a[184633] = anon_sym_PLUS_EQ;
	v->a[184634] = anon_sym_DASH_EQ;
	v->a[184635] = anon_sym_STAR_EQ;
	v->a[184636] = anon_sym_SLASH_EQ;
	v->a[184637] = anon_sym_PERCENT_EQ;
	v->a[184638] = anon_sym_STAR_STAR_EQ;
	v->a[184639] = anon_sym_LT_LT_EQ;
	small_parse_table_9232(v);
}

void	small_parse_table_9232(t_small_parse_table_array *v)
{
	v->a[184640] = anon_sym_GT_GT_EQ;
	v->a[184641] = anon_sym_AMP_EQ;
	v->a[184642] = anon_sym_CARET_EQ;
	v->a[184643] = anon_sym_PIPE_EQ;
	v->a[184644] = anon_sym_PIPE_PIPE;
	v->a[184645] = anon_sym_AMP_AMP;
	v->a[184646] = anon_sym_EQ_EQ;
	v->a[184647] = anon_sym_BANG_EQ;
	v->a[184648] = anon_sym_LT_EQ;
	v->a[184649] = anon_sym_GT_EQ;
	v->a[184650] = anon_sym_RBRACK;
	v->a[184651] = anon_sym_EQ_TILDE;
	v->a[184652] = anon_sym_QMARK;
	v->a[184653] = 24;
	v->a[184654] = actions(71);
	v->a[184655] = 1;
	v->a[184656] = sym_comment;
	v->a[184657] = actions(6474);
	v->a[184658] = 1;
	v->a[184659] = sym_word;
	small_parse_table_9233(v);
}

void	small_parse_table_9233(t_small_parse_table_array *v)
{
	v->a[184660] = actions(6480);
	v->a[184661] = 1;
	v->a[184662] = anon_sym_LPAREN;
	v->a[184663] = actions(6488);
	v->a[184664] = 1;
	v->a[184665] = anon_sym_DOLLAR;
	v->a[184666] = actions(6494);
	v->a[184667] = 1;
	v->a[184668] = aux_sym_number_token1;
	v->a[184669] = actions(6496);
	v->a[184670] = 1;
	v->a[184671] = aux_sym_number_token2;
	v->a[184672] = actions(6500);
	v->a[184673] = 1;
	v->a[184674] = anon_sym_DOLLAR_LPAREN;
	v->a[184675] = actions(6508);
	v->a[184676] = 1;
	v->a[184677] = sym_test_operator;
	v->a[184678] = actions(6510);
	v->a[184679] = 1;
	small_parse_table_9234(v);
}

void	small_parse_table_9234(t_small_parse_table_array *v)
{
	v->a[184680] = sym_extglob_pattern;
	v->a[184681] = actions(6512);
	v->a[184682] = 1;
	v->a[184683] = sym__brace_start;
	v->a[184684] = actions(7226);
	v->a[184685] = 1;
	v->a[184686] = anon_sym_DOLLAR_LBRACK;
	v->a[184687] = actions(7228);
	v->a[184688] = 1;
	v->a[184689] = sym__special_character;
	v->a[184690] = actions(7230);
	v->a[184691] = 1;
	v->a[184692] = anon_sym_DQUOTE;
	v->a[184693] = actions(7234);
	v->a[184694] = 1;
	v->a[184695] = anon_sym_DOLLAR_LBRACE;
	v->a[184696] = actions(7236);
	v->a[184697] = 1;
	v->a[184698] = anon_sym_BQUOTE;
	v->a[184699] = actions(7238);
	small_parse_table_9235(v);
}

/* EOF small_parse_table_1846.c */
