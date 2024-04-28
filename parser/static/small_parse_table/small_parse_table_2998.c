/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2998.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14990(t_small_parse_table_array *v)
{
	v->a[299800] = sym_command_substitution;
	v->a[299801] = 12;
	v->a[299802] = actions(3);
	v->a[299803] = 1;
	v->a[299804] = sym_comment;
	v->a[299805] = actions(13060);
	v->a[299806] = 1;
	v->a[299807] = anon_sym_DOLLAR_LBRACK;
	v->a[299808] = actions(13066);
	v->a[299809] = 1;
	v->a[299810] = sym_string_content;
	v->a[299811] = actions(13068);
	v->a[299812] = 1;
	v->a[299813] = anon_sym_DOLLAR_LBRACE;
	v->a[299814] = actions(13070);
	v->a[299815] = 1;
	v->a[299816] = anon_sym_DOLLAR_LPAREN;
	v->a[299817] = actions(13072);
	v->a[299818] = 1;
	v->a[299819] = anon_sym_BQUOTE;
	small_parse_table_14991(v);
}

void	small_parse_table_14991(t_small_parse_table_array *v)
{
	v->a[299820] = actions(13074);
	v->a[299821] = 1;
	v->a[299822] = anon_sym_DOLLAR_BQUOTE;
	v->a[299823] = actions(13638);
	v->a[299824] = 1;
	v->a[299825] = anon_sym_DOLLAR;
	v->a[299826] = actions(13640);
	v->a[299827] = 1;
	v->a[299828] = anon_sym_DQUOTE;
	v->a[299829] = state(5841);
	v->a[299830] = 1;
	v->a[299831] = aux_sym_string_repeat1;
	v->a[299832] = actions(13058);
	v->a[299833] = 2;
	v->a[299834] = anon_sym_LPAREN_LPAREN;
	v->a[299835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299836] = state(6127);
	v->a[299837] = 4;
	v->a[299838] = sym_arithmetic_expansion;
	v->a[299839] = sym_simple_expansion;
	small_parse_table_14992(v);
}

void	small_parse_table_14992(t_small_parse_table_array *v)
{
	v->a[299840] = sym_expansion;
	v->a[299841] = sym_command_substitution;
	v->a[299842] = 12;
	v->a[299843] = actions(3);
	v->a[299844] = 1;
	v->a[299845] = sym_comment;
	v->a[299846] = actions(13060);
	v->a[299847] = 1;
	v->a[299848] = anon_sym_DOLLAR_LBRACK;
	v->a[299849] = actions(13066);
	v->a[299850] = 1;
	v->a[299851] = sym_string_content;
	v->a[299852] = actions(13068);
	v->a[299853] = 1;
	v->a[299854] = anon_sym_DOLLAR_LBRACE;
	v->a[299855] = actions(13070);
	v->a[299856] = 1;
	v->a[299857] = anon_sym_DOLLAR_LPAREN;
	v->a[299858] = actions(13072);
	v->a[299859] = 1;
	small_parse_table_14993(v);
}

void	small_parse_table_14993(t_small_parse_table_array *v)
{
	v->a[299860] = anon_sym_BQUOTE;
	v->a[299861] = actions(13074);
	v->a[299862] = 1;
	v->a[299863] = anon_sym_DOLLAR_BQUOTE;
	v->a[299864] = actions(13642);
	v->a[299865] = 1;
	v->a[299866] = anon_sym_DOLLAR;
	v->a[299867] = actions(13644);
	v->a[299868] = 1;
	v->a[299869] = anon_sym_DQUOTE;
	v->a[299870] = state(5768);
	v->a[299871] = 1;
	v->a[299872] = aux_sym_string_repeat1;
	v->a[299873] = actions(13058);
	v->a[299874] = 2;
	v->a[299875] = anon_sym_LPAREN_LPAREN;
	v->a[299876] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299877] = state(6127);
	v->a[299878] = 4;
	v->a[299879] = sym_arithmetic_expansion;
	small_parse_table_14994(v);
}

void	small_parse_table_14994(t_small_parse_table_array *v)
{
	v->a[299880] = sym_simple_expansion;
	v->a[299881] = sym_expansion;
	v->a[299882] = sym_command_substitution;
	v->a[299883] = 12;
	v->a[299884] = actions(3);
	v->a[299885] = 1;
	v->a[299886] = sym_comment;
	v->a[299887] = actions(13060);
	v->a[299888] = 1;
	v->a[299889] = anon_sym_DOLLAR_LBRACK;
	v->a[299890] = actions(13066);
	v->a[299891] = 1;
	v->a[299892] = sym_string_content;
	v->a[299893] = actions(13068);
	v->a[299894] = 1;
	v->a[299895] = anon_sym_DOLLAR_LBRACE;
	v->a[299896] = actions(13070);
	v->a[299897] = 1;
	v->a[299898] = anon_sym_DOLLAR_LPAREN;
	v->a[299899] = actions(13072);
	small_parse_table_14995(v);
}

/* EOF small_parse_table_2998.c */
