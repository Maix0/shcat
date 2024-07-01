/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_678.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3390(t_small_parse_table_array *v)
{
	v->a[67800] = state(1078);
	v->a[67801] = 1;
	v->a[67802] = sym_concatenation;
	v->a[67803] = actions(2620);
	v->a[67804] = 3;
	v->a[67805] = sym_raw_string;
	v->a[67806] = sym_number;
	v->a[67807] = sym_word;
	v->a[67808] = state(947);
	v->a[67809] = 5;
	v->a[67810] = sym_arithmetic_expansion;
	v->a[67811] = sym_string;
	v->a[67812] = sym_simple_expansion;
	v->a[67813] = sym_expansion;
	v->a[67814] = sym_command_substitution;
	v->a[67815] = 12;
	v->a[67816] = actions(3);
	v->a[67817] = 1;
	v->a[67818] = sym_comment;
	v->a[67819] = actions(2400);
	small_parse_table_3391(v);
}

void	small_parse_table_3391(t_small_parse_table_array *v)
{
	v->a[67820] = 1;
	v->a[67821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67822] = actions(2404);
	v->a[67823] = 1;
	v->a[67824] = anon_sym_DQUOTE;
	v->a[67825] = actions(2406);
	v->a[67826] = 1;
	v->a[67827] = anon_sym_DOLLAR_LBRACE;
	v->a[67828] = actions(2408);
	v->a[67829] = 1;
	v->a[67830] = anon_sym_DOLLAR_LPAREN;
	v->a[67831] = actions(2410);
	v->a[67832] = 1;
	v->a[67833] = anon_sym_BQUOTE;
	v->a[67834] = actions(2532);
	v->a[67835] = 1;
	v->a[67836] = anon_sym_DOLLAR;
	v->a[67837] = actions(2544);
	v->a[67838] = 1;
	v->a[67839] = sym__comment_word;
	small_parse_table_3392(v);
}

void	small_parse_table_3392(t_small_parse_table_array *v)
{
	v->a[67840] = actions(2546);
	v->a[67841] = 1;
	v->a[67842] = sym__empty_value;
	v->a[67843] = state(622);
	v->a[67844] = 1;
	v->a[67845] = sym_concatenation;
	v->a[67846] = actions(2622);
	v->a[67847] = 3;
	v->a[67848] = sym_raw_string;
	v->a[67849] = sym_number;
	v->a[67850] = sym_word;
	v->a[67851] = state(401);
	v->a[67852] = 5;
	v->a[67853] = sym_arithmetic_expansion;
	v->a[67854] = sym_string;
	v->a[67855] = sym_simple_expansion;
	v->a[67856] = sym_expansion;
	v->a[67857] = sym_command_substitution;
	v->a[67858] = 10;
	v->a[67859] = actions(3);
	small_parse_table_3393(v);
}

void	small_parse_table_3393(t_small_parse_table_array *v)
{
	v->a[67860] = 1;
	v->a[67861] = sym_comment;
	v->a[67862] = actions(2340);
	v->a[67863] = 1;
	v->a[67864] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67865] = actions(2344);
	v->a[67866] = 1;
	v->a[67867] = anon_sym_DQUOTE;
	v->a[67868] = actions(2346);
	v->a[67869] = 1;
	v->a[67870] = anon_sym_DOLLAR_LBRACE;
	v->a[67871] = actions(2348);
	v->a[67872] = 1;
	v->a[67873] = anon_sym_DOLLAR_LPAREN;
	v->a[67874] = actions(2350);
	v->a[67875] = 1;
	v->a[67876] = anon_sym_BQUOTE;
	v->a[67877] = actions(2352);
	v->a[67878] = 1;
	v->a[67879] = sym__bare_dollar;
	small_parse_table_3394(v);
}

void	small_parse_table_3394(t_small_parse_table_array *v)
{
	v->a[67880] = actions(2392);
	v->a[67881] = 1;
	v->a[67882] = anon_sym_DOLLAR;
	v->a[67883] = actions(2338);
	v->a[67884] = 5;
	v->a[67885] = aux_sym_concatenation_token1;
	v->a[67886] = sym_raw_string;
	v->a[67887] = sym_number;
	v->a[67888] = sym__comment_word;
	v->a[67889] = sym_word;
	v->a[67890] = state(853);
	v->a[67891] = 5;
	v->a[67892] = sym_arithmetic_expansion;
	v->a[67893] = sym_string;
	v->a[67894] = sym_simple_expansion;
	v->a[67895] = sym_expansion;
	v->a[67896] = sym_command_substitution;
	v->a[67897] = 10;
	v->a[67898] = actions(3);
	v->a[67899] = 1;
	small_parse_table_3395(v);
}

/* EOF small_parse_table_678.c */
