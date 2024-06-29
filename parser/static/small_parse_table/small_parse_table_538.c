/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_538.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2690(t_small_parse_table_array *v)
{
	v->a[53800] = anon_sym_DOLLAR;
	v->a[53801] = anon_sym_DQUOTE;
	v->a[53802] = sym_raw_string;
	v->a[53803] = sym_number;
	v->a[53804] = anon_sym_DOLLAR_LBRACE;
	v->a[53805] = anon_sym_DOLLAR_LPAREN;
	v->a[53806] = anon_sym_BQUOTE;
	v->a[53807] = sym_word;
	v->a[53808] = 5;
	v->a[53809] = actions(3);
	v->a[53810] = 1;
	v->a[53811] = sym_comment;
	v->a[53812] = actions(538);
	v->a[53813] = 2;
	v->a[53814] = sym_file_descriptor;
	v->a[53815] = sym_variable_name;
	v->a[53816] = state(883);
	v->a[53817] = 2;
	v->a[53818] = sym_concatenation;
	v->a[53819] = aux_sym_for_statement_repeat1;
	small_parse_table_2691(v);
}

void	small_parse_table_2691(t_small_parse_table_array *v)
{
	v->a[53820] = state(1109);
	v->a[53821] = 5;
	v->a[53822] = sym_arithmetic_expansion;
	v->a[53823] = sym_string;
	v->a[53824] = sym_simple_expansion;
	v->a[53825] = sym_expansion;
	v->a[53826] = sym_command_substitution;
	v->a[53827] = actions(540);
	v->a[53828] = 19;
	v->a[53829] = anon_sym_LT;
	v->a[53830] = anon_sym_GT;
	v->a[53831] = anon_sym_GT_GT;
	v->a[53832] = anon_sym_AMP_GT;
	v->a[53833] = anon_sym_AMP_GT_GT;
	v->a[53834] = anon_sym_LT_AMP;
	v->a[53835] = anon_sym_GT_AMP;
	v->a[53836] = anon_sym_GT_PIPE;
	v->a[53837] = anon_sym_LT_AMP_DASH;
	v->a[53838] = anon_sym_GT_AMP_DASH;
	v->a[53839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2692(v);
}

void	small_parse_table_2692(t_small_parse_table_array *v)
{
	v->a[53840] = anon_sym_DOLLAR;
	v->a[53841] = anon_sym_DQUOTE;
	v->a[53842] = sym_raw_string;
	v->a[53843] = sym_number;
	v->a[53844] = anon_sym_DOLLAR_LBRACE;
	v->a[53845] = anon_sym_DOLLAR_LPAREN;
	v->a[53846] = anon_sym_BQUOTE;
	v->a[53847] = sym_word;
	v->a[53848] = 3;
	v->a[53849] = actions(3);
	v->a[53850] = 1;
	v->a[53851] = sym_comment;
	v->a[53852] = actions(1104);
	v->a[53853] = 3;
	v->a[53854] = sym_file_descriptor;
	v->a[53855] = sym__concat;
	v->a[53856] = sym__bare_dollar;
	v->a[53857] = actions(1102);
	v->a[53858] = 25;
	v->a[53859] = anon_sym_PIPE;
	small_parse_table_2693(v);
}

void	small_parse_table_2693(t_small_parse_table_array *v)
{
	v->a[53860] = anon_sym_AMP_AMP;
	v->a[53861] = anon_sym_PIPE_PIPE;
	v->a[53862] = anon_sym_LT;
	v->a[53863] = anon_sym_GT;
	v->a[53864] = anon_sym_GT_GT;
	v->a[53865] = anon_sym_AMP_GT;
	v->a[53866] = anon_sym_AMP_GT_GT;
	v->a[53867] = anon_sym_LT_AMP;
	v->a[53868] = anon_sym_GT_AMP;
	v->a[53869] = anon_sym_GT_PIPE;
	v->a[53870] = anon_sym_LT_AMP_DASH;
	v->a[53871] = anon_sym_GT_AMP_DASH;
	v->a[53872] = anon_sym_LT_LT;
	v->a[53873] = anon_sym_LT_LT_DASH;
	v->a[53874] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53875] = aux_sym_concatenation_token1;
	v->a[53876] = anon_sym_DOLLAR;
	v->a[53877] = anon_sym_DQUOTE;
	v->a[53878] = sym_raw_string;
	v->a[53879] = sym_number;
	small_parse_table_2694(v);
}

void	small_parse_table_2694(t_small_parse_table_array *v)
{
	v->a[53880] = anon_sym_DOLLAR_LBRACE;
	v->a[53881] = anon_sym_DOLLAR_LPAREN;
	v->a[53882] = anon_sym_BQUOTE;
	v->a[53883] = sym_word;
	v->a[53884] = 3;
	v->a[53885] = actions(3);
	v->a[53886] = 1;
	v->a[53887] = sym_comment;
	v->a[53888] = actions(1100);
	v->a[53889] = 3;
	v->a[53890] = sym_file_descriptor;
	v->a[53891] = sym__concat;
	v->a[53892] = sym__bare_dollar;
	v->a[53893] = actions(1098);
	v->a[53894] = 25;
	v->a[53895] = anon_sym_PIPE;
	v->a[53896] = anon_sym_AMP_AMP;
	v->a[53897] = anon_sym_PIPE_PIPE;
	v->a[53898] = anon_sym_LT;
	v->a[53899] = anon_sym_GT;
	small_parse_table_2695(v);
}

/* EOF small_parse_table_538.c */
