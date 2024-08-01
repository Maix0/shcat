/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_385.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1925(t_small_parse_table_array *v)
{
	v->a[38500] = state(779);
	v->a[38501] = 5;
	v->a[38502] = sym_arithmetic_expansion;
	v->a[38503] = sym_string;
	v->a[38504] = sym_simple_expansion;
	v->a[38505] = sym_expansion;
	v->a[38506] = sym_command_substitution;
	v->a[38507] = 10;
	v->a[38508] = actions(3);
	v->a[38509] = 1;
	v->a[38510] = sym_comment;
	v->a[38511] = actions(704);
	v->a[38512] = 1;
	v->a[38513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38514] = actions(708);
	v->a[38515] = 1;
	v->a[38516] = anon_sym_DQUOTE;
	v->a[38517] = actions(710);
	v->a[38518] = 1;
	v->a[38519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1926(v);
}

void	small_parse_table_1926(t_small_parse_table_array *v)
{
	v->a[38520] = actions(712);
	v->a[38521] = 1;
	v->a[38522] = anon_sym_DOLLAR_LPAREN;
	v->a[38523] = actions(714);
	v->a[38524] = 1;
	v->a[38525] = anon_sym_BQUOTE;
	v->a[38526] = actions(1525);
	v->a[38527] = 1;
	v->a[38528] = sym__bare_dollar;
	v->a[38529] = actions(1770);
	v->a[38530] = 1;
	v->a[38531] = anon_sym_DOLLAR;
	v->a[38532] = actions(1521);
	v->a[38533] = 5;
	v->a[38534] = aux_sym_concatenation_token1;
	v->a[38535] = sym_raw_string;
	v->a[38536] = sym_number;
	v->a[38537] = sym__comment_word;
	v->a[38538] = sym_word;
	v->a[38539] = state(474);
	small_parse_table_1927(v);
}

void	small_parse_table_1927(t_small_parse_table_array *v)
{
	v->a[38540] = 5;
	v->a[38541] = sym_arithmetic_expansion;
	v->a[38542] = sym_string;
	v->a[38543] = sym_simple_expansion;
	v->a[38544] = sym_expansion;
	v->a[38545] = sym_command_substitution;
	v->a[38546] = 11;
	v->a[38547] = actions(3);
	v->a[38548] = 1;
	v->a[38549] = sym_comment;
	v->a[38550] = actions(782);
	v->a[38551] = 1;
	v->a[38552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38553] = actions(784);
	v->a[38554] = 1;
	v->a[38555] = anon_sym_DOLLAR;
	v->a[38556] = actions(786);
	v->a[38557] = 1;
	v->a[38558] = anon_sym_DQUOTE;
	v->a[38559] = actions(788);
	small_parse_table_1928(v);
}

void	small_parse_table_1928(t_small_parse_table_array *v)
{
	v->a[38560] = 1;
	v->a[38561] = anon_sym_DOLLAR_LBRACE;
	v->a[38562] = actions(790);
	v->a[38563] = 1;
	v->a[38564] = anon_sym_DOLLAR_LPAREN;
	v->a[38565] = actions(792);
	v->a[38566] = 1;
	v->a[38567] = anon_sym_BQUOTE;
	v->a[38568] = actions(794);
	v->a[38569] = 1;
	v->a[38570] = sym_extglob_pattern;
	v->a[38571] = state(1567);
	v->a[38572] = 2;
	v->a[38573] = sym_concatenation;
	v->a[38574] = sym__extglob_blob;
	v->a[38575] = actions(1772);
	v->a[38576] = 3;
	v->a[38577] = sym_raw_string;
	v->a[38578] = sym_number;
	v->a[38579] = sym_word;
	small_parse_table_1929(v);
}

void	small_parse_table_1929(t_small_parse_table_array *v)
{
	v->a[38580] = state(1505);
	v->a[38581] = 5;
	v->a[38582] = sym_arithmetic_expansion;
	v->a[38583] = sym_string;
	v->a[38584] = sym_simple_expansion;
	v->a[38585] = sym_expansion;
	v->a[38586] = sym_command_substitution;
	v->a[38587] = 10;
	v->a[38588] = actions(3);
	v->a[38589] = 1;
	v->a[38590] = sym_comment;
	v->a[38591] = actions(25);
	v->a[38592] = 1;
	v->a[38593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38594] = actions(27);
	v->a[38595] = 1;
	v->a[38596] = anon_sym_DOLLAR;
	v->a[38597] = actions(29);
	v->a[38598] = 1;
	v->a[38599] = anon_sym_DQUOTE;
	small_parse_table_1930(v);
}

/* EOF small_parse_table_385.c */
