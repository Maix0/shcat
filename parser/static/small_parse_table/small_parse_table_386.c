/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_386.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1930(t_small_parse_table_array *v)
{
	v->a[38600] = actions(33);
	v->a[38601] = 1;
	v->a[38602] = anon_sym_DOLLAR_LBRACE;
	v->a[38603] = actions(35);
	v->a[38604] = 1;
	v->a[38605] = anon_sym_DOLLAR_LPAREN;
	v->a[38606] = actions(37);
	v->a[38607] = 1;
	v->a[38608] = anon_sym_BQUOTE;
	v->a[38609] = actions(1776);
	v->a[38610] = 1;
	v->a[38611] = sym__bare_dollar;
	v->a[38612] = actions(1774);
	v->a[38613] = 5;
	v->a[38614] = aux_sym_concatenation_token1;
	v->a[38615] = sym_raw_string;
	v->a[38616] = sym_number;
	v->a[38617] = sym__comment_word;
	v->a[38618] = sym_word;
	v->a[38619] = state(400);
	small_parse_table_1931(v);
}

void	small_parse_table_1931(t_small_parse_table_array *v)
{
	v->a[38620] = 5;
	v->a[38621] = sym_arithmetic_expansion;
	v->a[38622] = sym_string;
	v->a[38623] = sym_simple_expansion;
	v->a[38624] = sym_expansion;
	v->a[38625] = sym_command_substitution;
	v->a[38626] = 10;
	v->a[38627] = actions(3);
	v->a[38628] = 1;
	v->a[38629] = sym_comment;
	v->a[38630] = actions(655);
	v->a[38631] = 1;
	v->a[38632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38633] = actions(659);
	v->a[38634] = 1;
	v->a[38635] = anon_sym_DQUOTE;
	v->a[38636] = actions(661);
	v->a[38637] = 1;
	v->a[38638] = anon_sym_DOLLAR_LBRACE;
	v->a[38639] = actions(663);
	small_parse_table_1932(v);
}

void	small_parse_table_1932(t_small_parse_table_array *v)
{
	v->a[38640] = 1;
	v->a[38641] = anon_sym_DOLLAR_LPAREN;
	v->a[38642] = actions(665);
	v->a[38643] = 1;
	v->a[38644] = anon_sym_BQUOTE;
	v->a[38645] = actions(1531);
	v->a[38646] = 1;
	v->a[38647] = sym__bare_dollar;
	v->a[38648] = actions(1778);
	v->a[38649] = 1;
	v->a[38650] = anon_sym_DOLLAR;
	v->a[38651] = actions(1527);
	v->a[38652] = 5;
	v->a[38653] = aux_sym_concatenation_token1;
	v->a[38654] = sym_raw_string;
	v->a[38655] = sym_number;
	v->a[38656] = sym__comment_word;
	v->a[38657] = sym_word;
	v->a[38658] = state(609);
	v->a[38659] = 5;
	small_parse_table_1933(v);
}

void	small_parse_table_1933(t_small_parse_table_array *v)
{
	v->a[38660] = sym_arithmetic_expansion;
	v->a[38661] = sym_string;
	v->a[38662] = sym_simple_expansion;
	v->a[38663] = sym_expansion;
	v->a[38664] = sym_command_substitution;
	v->a[38665] = 12;
	v->a[38666] = actions(3);
	v->a[38667] = 1;
	v->a[38668] = sym_comment;
	v->a[38669] = actions(655);
	v->a[38670] = 1;
	v->a[38671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38672] = actions(657);
	v->a[38673] = 1;
	v->a[38674] = anon_sym_DOLLAR;
	v->a[38675] = actions(659);
	v->a[38676] = 1;
	v->a[38677] = anon_sym_DQUOTE;
	v->a[38678] = actions(661);
	v->a[38679] = 1;
	small_parse_table_1934(v);
}

void	small_parse_table_1934(t_small_parse_table_array *v)
{
	v->a[38680] = anon_sym_DOLLAR_LBRACE;
	v->a[38681] = actions(663);
	v->a[38682] = 1;
	v->a[38683] = anon_sym_DOLLAR_LPAREN;
	v->a[38684] = actions(665);
	v->a[38685] = 1;
	v->a[38686] = anon_sym_BQUOTE;
	v->a[38687] = actions(1780);
	v->a[38688] = 1;
	v->a[38689] = aux_sym_heredoc_redirect_token1;
	v->a[38690] = state(742);
	v->a[38691] = 1;
	v->a[38692] = aux_sym__heredoc_command;
	v->a[38693] = state(1296);
	v->a[38694] = 1;
	v->a[38695] = sym_concatenation;
	v->a[38696] = actions(645);
	v->a[38697] = 3;
	v->a[38698] = sym_raw_string;
	v->a[38699] = sym_number;
	small_parse_table_1935(v);
}

/* EOF small_parse_table_386.c */
