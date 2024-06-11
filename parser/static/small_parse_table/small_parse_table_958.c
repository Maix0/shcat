/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_958.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4790(t_small_parse_table_array *v)
{
	v->a[95800] = 4;
	v->a[95801] = actions(3);
	v->a[95802] = 1;
	v->a[95803] = sym_comment;
	v->a[95804] = actions(4054);
	v->a[95805] = 1;
	v->a[95806] = sym_variable_name;
	v->a[95807] = actions(4052);
	v->a[95808] = 2;
	v->a[95809] = aux_sym__simple_variable_name_token1;
	v->a[95810] = aux_sym__multiline_variable_name_token1;
	v->a[95811] = actions(4050);
	v->a[95812] = 9;
	v->a[95813] = anon_sym_BANG;
	v->a[95814] = anon_sym_DASH;
	v->a[95815] = anon_sym_STAR;
	v->a[95816] = anon_sym_QMARK;
	v->a[95817] = anon_sym_DOLLAR;
	v->a[95818] = anon_sym_POUND;
	v->a[95819] = anon_sym_AT;
	small_parse_table_4791(v);
}

void	small_parse_table_4791(t_small_parse_table_array *v)
{
	v->a[95820] = anon_sym_0;
	v->a[95821] = anon_sym__;
	v->a[95822] = 10;
	v->a[95823] = actions(3);
	v->a[95824] = 1;
	v->a[95825] = sym_comment;
	v->a[95826] = actions(3856);
	v->a[95827] = 1;
	v->a[95828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95829] = actions(3862);
	v->a[95830] = 1;
	v->a[95831] = sym_string_content;
	v->a[95832] = actions(3864);
	v->a[95833] = 1;
	v->a[95834] = anon_sym_DOLLAR_LBRACE;
	v->a[95835] = actions(3866);
	v->a[95836] = 1;
	v->a[95837] = anon_sym_DOLLAR_LPAREN;
	v->a[95838] = actions(3868);
	v->a[95839] = 1;
	small_parse_table_4792(v);
}

void	small_parse_table_4792(t_small_parse_table_array *v)
{
	v->a[95840] = anon_sym_BQUOTE;
	v->a[95841] = actions(4056);
	v->a[95842] = 1;
	v->a[95843] = anon_sym_DOLLAR;
	v->a[95844] = actions(4058);
	v->a[95845] = 1;
	v->a[95846] = anon_sym_DQUOTE;
	v->a[95847] = state(1987);
	v->a[95848] = 1;
	v->a[95849] = aux_sym_string_repeat1;
	v->a[95850] = state(2107);
	v->a[95851] = 4;
	v->a[95852] = sym_arithmetic_expansion;
	v->a[95853] = sym_simple_expansion;
	v->a[95854] = sym_expansion;
	v->a[95855] = sym_command_substitution;
	v->a[95856] = 4;
	v->a[95857] = actions(3);
	v->a[95858] = 1;
	v->a[95859] = sym_comment;
	small_parse_table_4793(v);
}

void	small_parse_table_4793(t_small_parse_table_array *v)
{
	v->a[95860] = actions(4062);
	v->a[95861] = 1;
	v->a[95862] = anon_sym_esac;
	v->a[95863] = actions(4064);
	v->a[95864] = 1;
	v->a[95865] = sym_extglob_pattern;
	v->a[95866] = actions(4060);
	v->a[95867] = 10;
	v->a[95868] = anon_sym_LPAREN;
	v->a[95869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95870] = anon_sym_DOLLAR;
	v->a[95871] = anon_sym_DQUOTE;
	v->a[95872] = sym_raw_string;
	v->a[95873] = sym_number;
	v->a[95874] = anon_sym_DOLLAR_LBRACE;
	v->a[95875] = anon_sym_DOLLAR_LPAREN;
	v->a[95876] = anon_sym_BQUOTE;
	v->a[95877] = sym_word;
	v->a[95878] = 10;
	v->a[95879] = actions(3);
	small_parse_table_4794(v);
}

void	small_parse_table_4794(t_small_parse_table_array *v)
{
	v->a[95880] = 1;
	v->a[95881] = sym_comment;
	v->a[95882] = actions(3856);
	v->a[95883] = 1;
	v->a[95884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95885] = actions(3862);
	v->a[95886] = 1;
	v->a[95887] = sym_string_content;
	v->a[95888] = actions(3864);
	v->a[95889] = 1;
	v->a[95890] = anon_sym_DOLLAR_LBRACE;
	v->a[95891] = actions(3866);
	v->a[95892] = 1;
	v->a[95893] = anon_sym_DOLLAR_LPAREN;
	v->a[95894] = actions(3868);
	v->a[95895] = 1;
	v->a[95896] = anon_sym_BQUOTE;
	v->a[95897] = actions(4066);
	v->a[95898] = 1;
	v->a[95899] = anon_sym_DOLLAR;
	small_parse_table_4795(v);
}

/* EOF small_parse_table_958.c */
