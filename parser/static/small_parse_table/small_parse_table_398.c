/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_398.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1990(t_small_parse_table_array *v)
{
	v->a[39800] = 10;
	v->a[39801] = actions(3);
	v->a[39802] = 1;
	v->a[39803] = sym_comment;
	v->a[39804] = actions(723);
	v->a[39805] = 1;
	v->a[39806] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39807] = actions(725);
	v->a[39808] = 1;
	v->a[39809] = anon_sym_DOLLAR;
	v->a[39810] = actions(727);
	v->a[39811] = 1;
	v->a[39812] = anon_sym_DQUOTE;
	v->a[39813] = actions(729);
	v->a[39814] = 1;
	v->a[39815] = anon_sym_DOLLAR_LBRACE;
	v->a[39816] = actions(731);
	v->a[39817] = 1;
	v->a[39818] = anon_sym_DOLLAR_LPAREN;
	v->a[39819] = actions(733);
	small_parse_table_1991(v);
}

void	small_parse_table_1991(t_small_parse_table_array *v)
{
	v->a[39820] = 1;
	v->a[39821] = anon_sym_BQUOTE;
	v->a[39822] = state(202);
	v->a[39823] = 2;
	v->a[39824] = sym_concatenation;
	v->a[39825] = aux_sym_for_statement_repeat1;
	v->a[39826] = actions(721);
	v->a[39827] = 3;
	v->a[39828] = sym_raw_string;
	v->a[39829] = sym_number;
	v->a[39830] = sym_word;
	v->a[39831] = state(409);
	v->a[39832] = 5;
	v->a[39833] = sym_arithmetic_expansion;
	v->a[39834] = sym_string;
	v->a[39835] = sym_simple_expansion;
	v->a[39836] = sym_expansion;
	v->a[39837] = sym_command_substitution;
	v->a[39838] = 10;
	v->a[39839] = actions(3);
	small_parse_table_1992(v);
}

void	small_parse_table_1992(t_small_parse_table_array *v)
{
	v->a[39840] = 1;
	v->a[39841] = sym_comment;
	v->a[39842] = actions(704);
	v->a[39843] = 1;
	v->a[39844] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39845] = actions(706);
	v->a[39846] = 1;
	v->a[39847] = anon_sym_DOLLAR;
	v->a[39848] = actions(708);
	v->a[39849] = 1;
	v->a[39850] = anon_sym_DQUOTE;
	v->a[39851] = actions(710);
	v->a[39852] = 1;
	v->a[39853] = anon_sym_DOLLAR_LBRACE;
	v->a[39854] = actions(712);
	v->a[39855] = 1;
	v->a[39856] = anon_sym_DOLLAR_LPAREN;
	v->a[39857] = actions(714);
	v->a[39858] = 1;
	v->a[39859] = anon_sym_BQUOTE;
	small_parse_table_1993(v);
}

void	small_parse_table_1993(t_small_parse_table_array *v)
{
	v->a[39860] = state(259);
	v->a[39861] = 2;
	v->a[39862] = sym_concatenation;
	v->a[39863] = aux_sym_for_statement_repeat1;
	v->a[39864] = actions(886);
	v->a[39865] = 3;
	v->a[39866] = sym_raw_string;
	v->a[39867] = sym_number;
	v->a[39868] = sym_word;
	v->a[39869] = state(593);
	v->a[39870] = 5;
	v->a[39871] = sym_arithmetic_expansion;
	v->a[39872] = sym_string;
	v->a[39873] = sym_simple_expansion;
	v->a[39874] = sym_expansion;
	v->a[39875] = sym_command_substitution;
	v->a[39876] = 6;
	v->a[39877] = actions(3);
	v->a[39878] = 1;
	v->a[39879] = sym_comment;
	small_parse_table_1994(v);
}

void	small_parse_table_1994(t_small_parse_table_array *v)
{
	v->a[39880] = actions(981);
	v->a[39881] = 1;
	v->a[39882] = sym_variable_name;
	v->a[39883] = actions(1840);
	v->a[39884] = 1;
	v->a[39885] = aux_sym_concatenation_token1;
	v->a[39886] = actions(1843);
	v->a[39887] = 1;
	v->a[39888] = sym__concat;
	v->a[39889] = state(787);
	v->a[39890] = 1;
	v->a[39891] = aux_sym_concatenation_repeat1;
	v->a[39892] = actions(973);
	v->a[39893] = 12;
	v->a[39894] = anon_sym_LT;
	v->a[39895] = anon_sym_GT;
	v->a[39896] = anon_sym_GT_GT;
	v->a[39897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39898] = anon_sym_DOLLAR;
	v->a[39899] = anon_sym_DQUOTE;
	small_parse_table_1995(v);
}

/* EOF small_parse_table_398.c */
