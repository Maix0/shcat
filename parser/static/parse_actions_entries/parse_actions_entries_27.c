/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_27.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_135(t_parse_actions_entries_array *v)
{
	v->a[2700] = entry(1, true);
	v->a[2701] = reduce(sym_arithmetic_ternary_expression, 5, 0, 60);
	v->a[2702] = entry(1, false);
	v->a[2703] = shift(616);
	v->a[2704] = entry(1, true);
	v->a[2705] = shift(619);
	v->a[2706] = entry(1, true);
	v->a[2707] = shift(1315);
	v->a[2708] = entry(2, false);
	v->a[2709] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2710] = shift_repeat(1202);
	v->a[2711] = entry(2, true);
	v->a[2712] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2713] = shift_repeat(1099);
	v->a[2714] = entry(2, true);
	v->a[2715] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2716] = shift_repeat(79);
	v->a[2717] = entry(2, true);
	v->a[2718] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2719] = shift_repeat(80);
	parse_actions_entries_136(v);
}

void	parse_actions_entries_136(t_parse_actions_entries_array *v)
{
	v->a[2720] = entry(2, true);
	v->a[2721] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2722] = shift_repeat(1310);
	v->a[2723] = entry(1, true);
	v->a[2724] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[2725] = entry(2, false);
	v->a[2726] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2727] = shift_repeat(786);
	v->a[2728] = entry(1, true);
	v->a[2729] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[2730] = entry(1, false);
	v->a[2731] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[2732] = entry(1, true);
	v->a[2733] = reduce(sym_arithmetic_unary_expression, 2, 0, 19);
	v->a[2734] = entry(1, true);
	v->a[2735] = reduce(sym_arithmetic_postfix_expression, 2, 0, 20);
	v->a[2736] = entry(1, false);
	v->a[2737] = reduce(sym_arithmetic_postfix_expression, 2, 0, 20);
	v->a[2738] = entry(1, true);
	v->a[2739] = reduce(sym_arithmetic_binary_expression, 3, 0, 36);
	parse_actions_entries_137(v);
}

void	parse_actions_entries_137(t_parse_actions_entries_array *v)
{
	v->a[2740] = entry(1, false);
	v->a[2741] = reduce(sym_arithmetic_binary_expression, 3, 0, 36);
	v->a[2742] = entry(1, true);
	v->a[2743] = shift(1310);
	v->a[2744] = entry(1, true);
	v->a[2745] = reduce(sym_heredoc_body, 2, 0, 0);
	v->a[2746] = entry(1, false);
	v->a[2747] = shift(802);
	v->a[2748] = entry(1, true);
	v->a[2749] = shift(802);
	v->a[2750] = entry(1, true);
	v->a[2751] = shift(1677);
	v->a[2752] = entry(1, true);
	v->a[2753] = shift(308);
	v->a[2754] = entry(1, true);
	v->a[2755] = shift(620);
	v->a[2756] = entry(1, true);
	v->a[2757] = shift(123);
	v->a[2758] = entry(1, true);
	v->a[2759] = shift(798);
	parse_actions_entries_138(v);
}

void	parse_actions_entries_138(t_parse_actions_entries_array *v)
{
	v->a[2760] = entry(1, true);
	v->a[2761] = shift(1690);
	v->a[2762] = entry(1, true);
	v->a[2763] = shift(1379);
	v->a[2764] = entry(1, true);
	v->a[2765] = shift(124);
	v->a[2766] = entry(1, true);
	v->a[2767] = shift(1327);
	v->a[2768] = entry(1, false);
	v->a[2769] = shift(680);
	v->a[2770] = entry(1, true);
	v->a[2771] = shift(679);
	v->a[2772] = entry(1, true);
	v->a[2773] = shift(671);
	v->a[2774] = entry(1, true);
	v->a[2775] = shift(1322);
	v->a[2776] = entry(1, true);
	v->a[2777] = shift(1279);
	v->a[2778] = entry(1, true);
	v->a[2779] = shift(688);
	parse_actions_entries_139(v);
}

void	parse_actions_entries_139(t_parse_actions_entries_array *v)
{
	v->a[2780] = entry(2, false);
	v->a[2781] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2782] = shift_repeat(802);
	v->a[2783] = entry(2, true);
	v->a[2784] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2785] = shift_repeat(802);
	v->a[2786] = entry(1, true);
	v->a[2787] = shift(452);
	v->a[2788] = entry(1, true);
	v->a[2789] = shift(125);
	v->a[2790] = entry(1, true);
	v->a[2791] = shift(785);
	v->a[2792] = entry(1, true);
	v->a[2793] = shift(623);
	v->a[2794] = entry(1, true);
	v->a[2795] = reduce(sym__extglob_blob, 1, 0, 0);
	v->a[2796] = entry(1, true);
	v->a[2797] = shift(1147);
	v->a[2798] = entry(1, true);
	v->a[2799] = shift(1146);
	parse_actions_entries_140(v);
}

/* EOF parse_actions_entries_27.c */
