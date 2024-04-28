/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1656.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8280(t_small_parse_table_array *v)
{
	v->a[165600] = aux_sym_concatenation_token1;
	v->a[165601] = actions(7477);
	v->a[165602] = 1;
	v->a[165603] = sym__concat;
	v->a[165604] = state(3120);
	v->a[165605] = 1;
	v->a[165606] = aux_sym_concatenation_repeat1;
	v->a[165607] = actions(1263);
	v->a[165608] = 4;
	v->a[165609] = sym_file_descriptor;
	v->a[165610] = sym_test_operator;
	v->a[165611] = sym__brace_start;
	v->a[165612] = aux_sym_heredoc_redirect_token1;
	v->a[165613] = actions(1261);
	v->a[165614] = 30;
	v->a[165615] = anon_sym_LPAREN_LPAREN;
	v->a[165616] = anon_sym_PIPE_PIPE;
	v->a[165617] = anon_sym_AMP_AMP;
	v->a[165618] = anon_sym_LT;
	v->a[165619] = anon_sym_GT;
	small_parse_table_8281(v);
}

void	small_parse_table_8281(t_small_parse_table_array *v)
{
	v->a[165620] = anon_sym_GT_GT;
	v->a[165621] = anon_sym_AMP_GT;
	v->a[165622] = anon_sym_AMP_GT_GT;
	v->a[165623] = anon_sym_LT_AMP;
	v->a[165624] = anon_sym_GT_AMP;
	v->a[165625] = anon_sym_GT_PIPE;
	v->a[165626] = anon_sym_LT_AMP_DASH;
	v->a[165627] = anon_sym_GT_AMP_DASH;
	v->a[165628] = anon_sym_LT_LT_LT;
	v->a[165629] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[165630] = anon_sym_DOLLAR_LBRACK;
	v->a[165631] = anon_sym_DOLLAR;
	v->a[165632] = sym__special_character;
	v->a[165633] = anon_sym_DQUOTE;
	v->a[165634] = sym_raw_string;
	v->a[165635] = sym_ansi_c_string;
	v->a[165636] = aux_sym_number_token1;
	v->a[165637] = aux_sym_number_token2;
	v->a[165638] = anon_sym_DOLLAR_LBRACE;
	v->a[165639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_8282(v);
}

void	small_parse_table_8282(t_small_parse_table_array *v)
{
	v->a[165640] = anon_sym_BQUOTE;
	v->a[165641] = anon_sym_DOLLAR_BQUOTE;
	v->a[165642] = anon_sym_LT_LPAREN;
	v->a[165643] = anon_sym_GT_LPAREN;
	v->a[165644] = sym_word;
	v->a[165645] = 20;
	v->a[165646] = actions(71);
	v->a[165647] = 1;
	v->a[165648] = sym_comment;
	v->a[165649] = actions(7402);
	v->a[165650] = 1;
	v->a[165651] = anon_sym_EQ;
	v->a[165652] = actions(7408);
	v->a[165653] = 1;
	v->a[165654] = anon_sym_PIPE_PIPE;
	v->a[165655] = actions(7410);
	v->a[165656] = 1;
	v->a[165657] = anon_sym_AMP_AMP;
	v->a[165658] = actions(7412);
	v->a[165659] = 1;
	small_parse_table_8283(v);
}

void	small_parse_table_8283(t_small_parse_table_array *v)
{
	v->a[165660] = anon_sym_PIPE;
	v->a[165661] = actions(7414);
	v->a[165662] = 1;
	v->a[165663] = anon_sym_CARET;
	v->a[165664] = actions(7416);
	v->a[165665] = 1;
	v->a[165666] = anon_sym_AMP;
	v->a[165667] = actions(7430);
	v->a[165668] = 1;
	v->a[165669] = anon_sym_STAR_STAR;
	v->a[165670] = actions(7434);
	v->a[165671] = 1;
	v->a[165672] = anon_sym_EQ_TILDE;
	v->a[165673] = actions(7436);
	v->a[165674] = 1;
	v->a[165675] = anon_sym_QMARK;
	v->a[165676] = actions(7438);
	v->a[165677] = 1;
	v->a[165678] = sym_test_operator;
	v->a[165679] = actions(7487);
	small_parse_table_8284(v);
}

void	small_parse_table_8284(t_small_parse_table_array *v)
{
	v->a[165680] = 1;
	v->a[165681] = anon_sym_RPAREN;
	v->a[165682] = actions(7404);
	v->a[165683] = 2;
	v->a[165684] = anon_sym_PLUS_PLUS;
	v->a[165685] = anon_sym_DASH_DASH;
	v->a[165686] = actions(7418);
	v->a[165687] = 2;
	v->a[165688] = anon_sym_EQ_EQ;
	v->a[165689] = anon_sym_BANG_EQ;
	v->a[165690] = actions(7420);
	v->a[165691] = 2;
	v->a[165692] = anon_sym_LT;
	v->a[165693] = anon_sym_GT;
	v->a[165694] = actions(7422);
	v->a[165695] = 2;
	v->a[165696] = anon_sym_LT_EQ;
	v->a[165697] = anon_sym_GT_EQ;
	v->a[165698] = actions(7424);
	v->a[165699] = 2;
	small_parse_table_8285(v);
}

/* EOF small_parse_table_1656.c */
