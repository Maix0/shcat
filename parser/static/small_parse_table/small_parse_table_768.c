/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_768.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3840(t_small_parse_table_array *v)
{
	v->a[76800] = actions(180);
	v->a[76801] = 1;
	v->a[76802] = anon_sym_DQUOTE;
	v->a[76803] = actions(184);
	v->a[76804] = 1;
	v->a[76805] = anon_sym_DOLLAR_LBRACE;
	v->a[76806] = actions(186);
	v->a[76807] = 1;
	v->a[76808] = anon_sym_DOLLAR_LPAREN;
	v->a[76809] = actions(188);
	v->a[76810] = 1;
	v->a[76811] = anon_sym_BQUOTE;
	v->a[76812] = actions(2846);
	v->a[76813] = 1;
	v->a[76814] = sym__bare_dollar;
	v->a[76815] = actions(2842);
	v->a[76816] = 5;
	v->a[76817] = aux_sym_concatenation_token1;
	v->a[76818] = sym_raw_string;
	v->a[76819] = sym_number;
	small_parse_table_3841(v);
}

void	small_parse_table_3841(t_small_parse_table_array *v)
{
	v->a[76820] = sym__comment_word;
	v->a[76821] = sym_word;
	v->a[76822] = state(407);
	v->a[76823] = 5;
	v->a[76824] = sym_arithmetic_expansion;
	v->a[76825] = sym_string;
	v->a[76826] = sym_simple_expansion;
	v->a[76827] = sym_expansion;
	v->a[76828] = sym_command_substitution;
	v->a[76829] = 12;
	v->a[76830] = actions(3);
	v->a[76831] = 1;
	v->a[76832] = sym_comment;
	v->a[76833] = actions(894);
	v->a[76834] = 1;
	v->a[76835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76836] = actions(896);
	v->a[76837] = 1;
	v->a[76838] = anon_sym_DOLLAR;
	v->a[76839] = actions(898);
	small_parse_table_3842(v);
}

void	small_parse_table_3842(t_small_parse_table_array *v)
{
	v->a[76840] = 1;
	v->a[76841] = anon_sym_DQUOTE;
	v->a[76842] = actions(900);
	v->a[76843] = 1;
	v->a[76844] = anon_sym_DOLLAR_LBRACE;
	v->a[76845] = actions(902);
	v->a[76846] = 1;
	v->a[76847] = anon_sym_DOLLAR_LPAREN;
	v->a[76848] = actions(904);
	v->a[76849] = 1;
	v->a[76850] = anon_sym_BQUOTE;
	v->a[76851] = actions(2937);
	v->a[76852] = 1;
	v->a[76853] = aux_sym_heredoc_redirect_token1;
	v->a[76854] = state(1480);
	v->a[76855] = 1;
	v->a[76856] = aux_sym__heredoc_command;
	v->a[76857] = state(1937);
	v->a[76858] = 1;
	v->a[76859] = sym_concatenation;
	small_parse_table_3843(v);
}

void	small_parse_table_3843(t_small_parse_table_array *v)
{
	v->a[76860] = actions(882);
	v->a[76861] = 3;
	v->a[76862] = sym_raw_string;
	v->a[76863] = sym_number;
	v->a[76864] = sym_word;
	v->a[76865] = state(1774);
	v->a[76866] = 5;
	v->a[76867] = sym_arithmetic_expansion;
	v->a[76868] = sym_string;
	v->a[76869] = sym_simple_expansion;
	v->a[76870] = sym_expansion;
	v->a[76871] = sym_command_substitution;
	v->a[76872] = 10;
	v->a[76873] = actions(3);
	v->a[76874] = 1;
	v->a[76875] = sym_comment;
	v->a[76876] = actions(27);
	v->a[76877] = 1;
	v->a[76878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76879] = actions(31);
	small_parse_table_3844(v);
}

void	small_parse_table_3844(t_small_parse_table_array *v)
{
	v->a[76880] = 1;
	v->a[76881] = anon_sym_DQUOTE;
	v->a[76882] = actions(35);
	v->a[76883] = 1;
	v->a[76884] = anon_sym_DOLLAR_LBRACE;
	v->a[76885] = actions(37);
	v->a[76886] = 1;
	v->a[76887] = anon_sym_DOLLAR_LPAREN;
	v->a[76888] = actions(39);
	v->a[76889] = 1;
	v->a[76890] = anon_sym_BQUOTE;
	v->a[76891] = actions(2917);
	v->a[76892] = 1;
	v->a[76893] = sym__bare_dollar;
	v->a[76894] = actions(2939);
	v->a[76895] = 1;
	v->a[76896] = anon_sym_DOLLAR;
	v->a[76897] = actions(2915);
	v->a[76898] = 5;
	v->a[76899] = aux_sym_concatenation_token1;
	small_parse_table_3845(v);
}

/* EOF small_parse_table_768.c */
