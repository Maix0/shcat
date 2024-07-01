/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_738.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3690(t_small_parse_table_array *v)
{
	v->a[73800] = 1;
	v->a[73801] = anon_sym_DOLLAR_LBRACE;
	v->a[73802] = actions(467);
	v->a[73803] = 1;
	v->a[73804] = anon_sym_DOLLAR_LPAREN;
	v->a[73805] = actions(469);
	v->a[73806] = 1;
	v->a[73807] = anon_sym_BQUOTE;
	v->a[73808] = actions(2581);
	v->a[73809] = 1;
	v->a[73810] = anon_sym_DOLLAR;
	v->a[73811] = actions(2583);
	v->a[73812] = 1;
	v->a[73813] = sym__bare_dollar;
	v->a[73814] = actions(2579);
	v->a[73815] = 5;
	v->a[73816] = aux_sym_concatenation_token1;
	v->a[73817] = sym_raw_string;
	v->a[73818] = sym_number;
	v->a[73819] = sym__comment_word;
	small_parse_table_3691(v);
}

void	small_parse_table_3691(t_small_parse_table_array *v)
{
	v->a[73820] = sym_word;
	v->a[73821] = state(531);
	v->a[73822] = 5;
	v->a[73823] = sym_arithmetic_expansion;
	v->a[73824] = sym_string;
	v->a[73825] = sym_simple_expansion;
	v->a[73826] = sym_expansion;
	v->a[73827] = sym_command_substitution;
	v->a[73828] = 10;
	v->a[73829] = actions(3);
	v->a[73830] = 1;
	v->a[73831] = sym_comment;
	v->a[73832] = actions(2587);
	v->a[73833] = 1;
	v->a[73834] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73835] = actions(2589);
	v->a[73836] = 1;
	v->a[73837] = anon_sym_DOLLAR;
	v->a[73838] = actions(2591);
	v->a[73839] = 1;
	small_parse_table_3692(v);
}

void	small_parse_table_3692(t_small_parse_table_array *v)
{
	v->a[73840] = anon_sym_DQUOTE;
	v->a[73841] = actions(2593);
	v->a[73842] = 1;
	v->a[73843] = anon_sym_DOLLAR_LBRACE;
	v->a[73844] = actions(2595);
	v->a[73845] = 1;
	v->a[73846] = anon_sym_DOLLAR_LPAREN;
	v->a[73847] = actions(2597);
	v->a[73848] = 1;
	v->a[73849] = anon_sym_BQUOTE;
	v->a[73850] = actions(2599);
	v->a[73851] = 1;
	v->a[73852] = sym__bare_dollar;
	v->a[73853] = actions(2585);
	v->a[73854] = 5;
	v->a[73855] = aux_sym_concatenation_token1;
	v->a[73856] = sym_raw_string;
	v->a[73857] = sym_number;
	v->a[73858] = sym__comment_word;
	v->a[73859] = sym_word;
	small_parse_table_3693(v);
}

void	small_parse_table_3693(t_small_parse_table_array *v)
{
	v->a[73860] = state(556);
	v->a[73861] = 5;
	v->a[73862] = sym_arithmetic_expansion;
	v->a[73863] = sym_string;
	v->a[73864] = sym_simple_expansion;
	v->a[73865] = sym_expansion;
	v->a[73866] = sym_command_substitution;
	v->a[73867] = 3;
	v->a[73868] = actions(870);
	v->a[73869] = 1;
	v->a[73870] = sym_comment;
	v->a[73871] = actions(1013);
	v->a[73872] = 6;
	v->a[73873] = anon_sym_PIPE;
	v->a[73874] = anon_sym_LT;
	v->a[73875] = anon_sym_GT;
	v->a[73876] = anon_sym_LT_AMP;
	v->a[73877] = anon_sym_GT_AMP;
	v->a[73878] = anon_sym_LT_LT;
	v->a[73879] = actions(1015);
	small_parse_table_3694(v);
}

void	small_parse_table_3694(t_small_parse_table_array *v)
{
	v->a[73880] = 11;
	v->a[73881] = sym_file_descriptor;
	v->a[73882] = sym__concat;
	v->a[73883] = sym_variable_name;
	v->a[73884] = anon_sym_AMP_AMP;
	v->a[73885] = anon_sym_PIPE_PIPE;
	v->a[73886] = anon_sym_GT_GT;
	v->a[73887] = anon_sym_GT_PIPE;
	v->a[73888] = anon_sym_LT_AMP_DASH;
	v->a[73889] = anon_sym_GT_AMP_DASH;
	v->a[73890] = anon_sym_LT_LT_DASH;
	v->a[73891] = aux_sym_concatenation_token1;
	v->a[73892] = 10;
	v->a[73893] = actions(3);
	v->a[73894] = 1;
	v->a[73895] = sym_comment;
	v->a[73896] = actions(699);
	v->a[73897] = 1;
	v->a[73898] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73899] = actions(703);
	small_parse_table_3695(v);
}

/* EOF small_parse_table_738.c */
