/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1428.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7140(t_small_parse_table_array *v)
{
	v->a[142800] = 1;
	v->a[142801] = sym_comment;
	v->a[142802] = actions(8521);
	v->a[142803] = 1;
	v->a[142804] = anon_sym_if;
	v->a[142805] = state(2588);
	v->a[142806] = 3;
	v->a[142807] = sym_if_statement;
	v->a[142808] = sym_compound_statement;
	v->a[142809] = sym_subshell;
	v->a[142810] = 5;
	v->a[142811] = actions(17);
	v->a[142812] = 1;
	v->a[142813] = anon_sym_LPAREN;
	v->a[142814] = actions(21);
	v->a[142815] = 1;
	v->a[142816] = anon_sym_LBRACE;
	v->a[142817] = actions(57);
	v->a[142818] = 1;
	v->a[142819] = sym_comment;
	small_parse_table_7141(v);
}

void	small_parse_table_7141(t_small_parse_table_array *v)
{
	v->a[142820] = actions(8521);
	v->a[142821] = 1;
	v->a[142822] = anon_sym_if;
	v->a[142823] = state(2381);
	v->a[142824] = 3;
	v->a[142825] = sym_if_statement;
	v->a[142826] = sym_compound_statement;
	v->a[142827] = sym_subshell;
	v->a[142828] = 6;
	v->a[142829] = actions(57);
	v->a[142830] = 1;
	v->a[142831] = sym_comment;
	v->a[142832] = actions(5421);
	v->a[142833] = 1;
	v->a[142834] = anon_sym_DOLLAR_LBRACE;
	v->a[142835] = actions(5425);
	v->a[142836] = 1;
	v->a[142837] = anon_sym_BQUOTE;
	v->a[142838] = actions(5427);
	v->a[142839] = 1;
	small_parse_table_7142(v);
}

void	small_parse_table_7142(t_small_parse_table_array *v)
{
	v->a[142840] = anon_sym_DOLLAR_BQUOTE;
	v->a[142841] = actions(8551);
	v->a[142842] = 1;
	v->a[142843] = anon_sym_DOLLAR_LPAREN;
	v->a[142844] = state(1892);
	v->a[142845] = 2;
	v->a[142846] = sym_expansion;
	v->a[142847] = sym_command_substitution;
	v->a[142848] = 6;
	v->a[142849] = actions(57);
	v->a[142850] = 1;
	v->a[142851] = sym_comment;
	v->a[142852] = actions(5828);
	v->a[142853] = 1;
	v->a[142854] = anon_sym_DOLLAR_LBRACE;
	v->a[142855] = actions(5832);
	v->a[142856] = 1;
	v->a[142857] = anon_sym_BQUOTE;
	v->a[142858] = actions(5834);
	v->a[142859] = 1;
	small_parse_table_7143(v);
}

void	small_parse_table_7143(t_small_parse_table_array *v)
{
	v->a[142860] = anon_sym_DOLLAR_BQUOTE;
	v->a[142861] = actions(8553);
	v->a[142862] = 1;
	v->a[142863] = anon_sym_DOLLAR_LPAREN;
	v->a[142864] = state(1580);
	v->a[142865] = 2;
	v->a[142866] = sym_expansion;
	v->a[142867] = sym_command_substitution;
	v->a[142868] = 6;
	v->a[142869] = actions(57);
	v->a[142870] = 1;
	v->a[142871] = sym_comment;
	v->a[142872] = actions(5467);
	v->a[142873] = 1;
	v->a[142874] = anon_sym_DOLLAR_LBRACE;
	v->a[142875] = actions(5471);
	v->a[142876] = 1;
	v->a[142877] = anon_sym_BQUOTE;
	v->a[142878] = actions(5473);
	v->a[142879] = 1;
	small_parse_table_7144(v);
}

void	small_parse_table_7144(t_small_parse_table_array *v)
{
	v->a[142880] = anon_sym_DOLLAR_BQUOTE;
	v->a[142881] = actions(8555);
	v->a[142882] = 1;
	v->a[142883] = anon_sym_DOLLAR_LPAREN;
	v->a[142884] = state(1102);
	v->a[142885] = 2;
	v->a[142886] = sym_expansion;
	v->a[142887] = sym_command_substitution;
	v->a[142888] = 3;
	v->a[142889] = actions(3);
	v->a[142890] = 1;
	v->a[142891] = sym_comment;
	v->a[142892] = actions(3066);
	v->a[142893] = 2;
	v->a[142894] = sym_regex;
	v->a[142895] = aux_sym__expansion_regex_token1;
	v->a[142896] = actions(3064);
	v->a[142897] = 4;
	v->a[142898] = anon_sym_RPAREN;
	v->a[142899] = anon_sym_DQUOTE;
	small_parse_table_7145(v);
}

/* EOF small_parse_table_1428.c */
