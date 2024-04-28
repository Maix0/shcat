/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2758.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13790(t_small_parse_table_array *v)
{
	v->a[275800] = state(5180);
	v->a[275801] = 1;
	v->a[275802] = aux_sym_concatenation_repeat1;
	v->a[275803] = actions(12327);
	v->a[275804] = 2;
	v->a[275805] = sym__concat;
	v->a[275806] = aux_sym_concatenation_token1;
	v->a[275807] = actions(4552);
	v->a[275808] = 7;
	v->a[275809] = anon_sym_PIPE;
	v->a[275810] = anon_sym_LT;
	v->a[275811] = anon_sym_GT;
	v->a[275812] = anon_sym_LT_LT;
	v->a[275813] = anon_sym_AMP_GT;
	v->a[275814] = anon_sym_LT_AMP;
	v->a[275815] = anon_sym_GT_AMP;
	v->a[275816] = actions(4554);
	v->a[275817] = 12;
	v->a[275818] = sym_file_descriptor;
	v->a[275819] = anon_sym_PIPE_PIPE;
	small_parse_table_13791(v);
}

void	small_parse_table_13791(t_small_parse_table_array *v)
{
	v->a[275820] = anon_sym_AMP_AMP;
	v->a[275821] = anon_sym_GT_GT;
	v->a[275822] = anon_sym_PIPE_AMP;
	v->a[275823] = anon_sym_RBRACK;
	v->a[275824] = anon_sym_AMP_GT_GT;
	v->a[275825] = anon_sym_GT_PIPE;
	v->a[275826] = anon_sym_LT_AMP_DASH;
	v->a[275827] = anon_sym_GT_AMP_DASH;
	v->a[275828] = anon_sym_LT_LT_DASH;
	v->a[275829] = anon_sym_LT_LT_LT;
	v->a[275830] = 4;
	v->a[275831] = actions(71);
	v->a[275832] = 1;
	v->a[275833] = sym_comment;
	v->a[275834] = actions(12354);
	v->a[275835] = 1;
	v->a[275836] = anon_sym_esac;
	v->a[275837] = actions(12350);
	v->a[275838] = 6;
	v->a[275839] = anon_sym_LPAREN;
	small_parse_table_13792(v);
}

void	small_parse_table_13792(t_small_parse_table_array *v)
{
	v->a[275840] = anon_sym_DOLLAR;
	v->a[275841] = aux_sym_number_token1;
	v->a[275842] = aux_sym_number_token2;
	v->a[275843] = anon_sym_DOLLAR_LPAREN;
	v->a[275844] = sym_word;
	v->a[275845] = actions(12352);
	v->a[275846] = 15;
	v->a[275847] = sym_test_operator;
	v->a[275848] = sym_extglob_pattern;
	v->a[275849] = sym__brace_start;
	v->a[275850] = anon_sym_LPAREN_LPAREN;
	v->a[275851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[275852] = anon_sym_DOLLAR_LBRACK;
	v->a[275853] = sym__special_character;
	v->a[275854] = anon_sym_DQUOTE;
	v->a[275855] = sym_raw_string;
	v->a[275856] = sym_ansi_c_string;
	v->a[275857] = anon_sym_DOLLAR_LBRACE;
	v->a[275858] = anon_sym_BQUOTE;
	v->a[275859] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_13793(v);
}

void	small_parse_table_13793(t_small_parse_table_array *v)
{
	v->a[275860] = anon_sym_LT_LPAREN;
	v->a[275861] = anon_sym_GT_LPAREN;
	v->a[275862] = 16;
	v->a[275863] = actions(71);
	v->a[275864] = 1;
	v->a[275865] = sym_comment;
	v->a[275866] = actions(11808);
	v->a[275867] = 1;
	v->a[275868] = anon_sym_LPAREN;
	v->a[275869] = actions(11812);
	v->a[275870] = 1;
	v->a[275871] = anon_sym_DOLLAR;
	v->a[275872] = actions(11814);
	v->a[275873] = 1;
	v->a[275874] = anon_sym_DQUOTE;
	v->a[275875] = actions(11816);
	v->a[275876] = 1;
	v->a[275877] = aux_sym_number_token1;
	v->a[275878] = actions(11818);
	v->a[275879] = 1;
	small_parse_table_13794(v);
}

void	small_parse_table_13794(t_small_parse_table_array *v)
{
	v->a[275880] = aux_sym_number_token2;
	v->a[275881] = actions(11820);
	v->a[275882] = 1;
	v->a[275883] = anon_sym_DOLLAR_LBRACE;
	v->a[275884] = actions(11822);
	v->a[275885] = 1;
	v->a[275886] = anon_sym_DOLLAR_LPAREN;
	v->a[275887] = actions(11824);
	v->a[275888] = 1;
	v->a[275889] = anon_sym_BQUOTE;
	v->a[275890] = actions(11826);
	v->a[275891] = 1;
	v->a[275892] = anon_sym_DOLLAR_BQUOTE;
	v->a[275893] = actions(12374);
	v->a[275894] = 1;
	v->a[275895] = aux_sym__c_word_token1;
	v->a[275896] = state(3285);
	v->a[275897] = 1;
	v->a[275898] = sym__c_postfix_expression;
	v->a[275899] = state(3286);
	small_parse_table_13795(v);
}

/* EOF small_parse_table_2758.c */
