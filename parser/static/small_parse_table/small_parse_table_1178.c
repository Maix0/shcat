/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1178.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5890(t_small_parse_table_array *v)
{
	v->a[117800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117801] = actions(5413);
	v->a[117802] = 1;
	v->a[117803] = anon_sym_DQUOTE;
	v->a[117804] = actions(5417);
	v->a[117805] = 1;
	v->a[117806] = aux_sym_number_token1;
	v->a[117807] = actions(5419);
	v->a[117808] = 1;
	v->a[117809] = aux_sym_number_token2;
	v->a[117810] = actions(5421);
	v->a[117811] = 1;
	v->a[117812] = anon_sym_DOLLAR_LBRACE;
	v->a[117813] = actions(5423);
	v->a[117814] = 1;
	v->a[117815] = anon_sym_DOLLAR_LPAREN;
	v->a[117816] = actions(5425);
	v->a[117817] = 1;
	v->a[117818] = anon_sym_BQUOTE;
	v->a[117819] = actions(5427);
	small_parse_table_5891(v);
}

void	small_parse_table_5891(t_small_parse_table_array *v)
{
	v->a[117820] = 1;
	v->a[117821] = anon_sym_DOLLAR_BQUOTE;
	v->a[117822] = actions(5433);
	v->a[117823] = 1;
	v->a[117824] = sym__brace_start;
	v->a[117825] = actions(6625);
	v->a[117826] = 1;
	v->a[117827] = sym_word;
	v->a[117828] = actions(6627);
	v->a[117829] = 1;
	v->a[117830] = sym__special_character;
	v->a[117831] = actions(6631);
	v->a[117832] = 1;
	v->a[117833] = sym__comment_word;
	v->a[117834] = actions(6919);
	v->a[117835] = 1;
	v->a[117836] = anon_sym_DOLLAR;
	v->a[117837] = actions(6629);
	v->a[117838] = 3;
	v->a[117839] = sym_test_operator;
	small_parse_table_5892(v);
}

void	small_parse_table_5892(t_small_parse_table_array *v)
{
	v->a[117840] = sym__bare_dollar;
	v->a[117841] = sym_raw_string;
	v->a[117842] = state(1903);
	v->a[117843] = 7;
	v->a[117844] = sym_arithmetic_expansion;
	v->a[117845] = sym_brace_expression;
	v->a[117846] = sym_string;
	v->a[117847] = sym_number;
	v->a[117848] = sym_simple_expansion;
	v->a[117849] = sym_expansion;
	v->a[117850] = sym_command_substitution;
	v->a[117851] = 16;
	v->a[117852] = actions(3);
	v->a[117853] = 1;
	v->a[117854] = sym_comment;
	v->a[117855] = actions(5407);
	v->a[117856] = 1;
	v->a[117857] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117858] = actions(5413);
	v->a[117859] = 1;
	small_parse_table_5893(v);
}

void	small_parse_table_5893(t_small_parse_table_array *v)
{
	v->a[117860] = anon_sym_DQUOTE;
	v->a[117861] = actions(5417);
	v->a[117862] = 1;
	v->a[117863] = aux_sym_number_token1;
	v->a[117864] = actions(5419);
	v->a[117865] = 1;
	v->a[117866] = aux_sym_number_token2;
	v->a[117867] = actions(5421);
	v->a[117868] = 1;
	v->a[117869] = anon_sym_DOLLAR_LBRACE;
	v->a[117870] = actions(5423);
	v->a[117871] = 1;
	v->a[117872] = anon_sym_DOLLAR_LPAREN;
	v->a[117873] = actions(5425);
	v->a[117874] = 1;
	v->a[117875] = anon_sym_BQUOTE;
	v->a[117876] = actions(5427);
	v->a[117877] = 1;
	v->a[117878] = anon_sym_DOLLAR_BQUOTE;
	v->a[117879] = actions(5433);
	small_parse_table_5894(v);
}

void	small_parse_table_5894(t_small_parse_table_array *v)
{
	v->a[117880] = 1;
	v->a[117881] = sym__brace_start;
	v->a[117882] = actions(6625);
	v->a[117883] = 1;
	v->a[117884] = sym_word;
	v->a[117885] = actions(6627);
	v->a[117886] = 1;
	v->a[117887] = sym__special_character;
	v->a[117888] = actions(6631);
	v->a[117889] = 1;
	v->a[117890] = sym__comment_word;
	v->a[117891] = actions(6921);
	v->a[117892] = 1;
	v->a[117893] = anon_sym_DOLLAR;
	v->a[117894] = actions(6629);
	v->a[117895] = 3;
	v->a[117896] = sym_test_operator;
	v->a[117897] = sym__bare_dollar;
	v->a[117898] = sym_raw_string;
	v->a[117899] = state(1903);
	small_parse_table_5895(v);
}

/* EOF small_parse_table_1178.c */
