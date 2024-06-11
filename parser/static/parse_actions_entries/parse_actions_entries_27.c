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
	v->a[2700] = shift(2081);
	v->a[2701] = entry(2, false);
	v->a[2702] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2703] = shift_repeat(1809);
	v->a[2704] = entry(2, false);
	v->a[2705] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2706] = shift_repeat(273);
	v->a[2707] = entry(2, true);
	v->a[2708] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2709] = shift_repeat(2030);
	v->a[2710] = entry(1, true);
	v->a[2711] = reduce(sym_heredoc_redirect, 5, 0, 59);
	v->a[2712] = entry(1, false);
	v->a[2713] = reduce(sym_heredoc_redirect, 5, 0, 59);
	v->a[2714] = entry(1, true);
	v->a[2715] = reduce(sym_do_group, 3, 0, 22);
	v->a[2716] = entry(1, false);
	v->a[2717] = reduce(sym_do_group, 3, 0, 22);
	v->a[2718] = entry(1, true);
	v->a[2719] = reduce(sym_case_statement, 5, 0, 36);
	parse_actions_entries_136(v);
}

void	parse_actions_entries_136(t_parse_actions_entries_array *v)
{
	v->a[2720] = entry(1, false);
	v->a[2721] = reduce(sym_case_statement, 5, 0, 36);
	v->a[2722] = entry(1, true);
	v->a[2723] = reduce(sym_heredoc_redirect, 5, 0, 61);
	v->a[2724] = entry(1, false);
	v->a[2725] = reduce(sym_heredoc_redirect, 5, 0, 61);
	v->a[2726] = entry(1, true);
	v->a[2727] = reduce(sym_case_statement, 7, 0, 64);
	v->a[2728] = entry(1, false);
	v->a[2729] = reduce(sym_case_statement, 7, 0, 64);
	v->a[2730] = entry(1, true);
	v->a[2731] = reduce(sym_case_statement, 7, 0, 67);
	v->a[2732] = entry(1, false);
	v->a[2733] = reduce(sym_case_statement, 7, 0, 67);
	v->a[2734] = entry(1, true);
	v->a[2735] = reduce(sym_case_statement, 5, 0, 47);
	v->a[2736] = entry(1, false);
	v->a[2737] = reduce(sym_case_statement, 5, 0, 47);
	v->a[2738] = entry(1, true);
	v->a[2739] = shift(911);
	parse_actions_entries_137(v);
}

void	parse_actions_entries_137(t_parse_actions_entries_array *v)
{
	v->a[2740] = entry(1, true);
	v->a[2741] = reduce(sym_heredoc_redirect, 6, 0, 6);
	v->a[2742] = entry(1, false);
	v->a[2743] = reduce(sym_heredoc_redirect, 6, 0, 6);
	v->a[2744] = entry(1, true);
	v->a[2745] = reduce(sym_heredoc_redirect, 6, 0, 68);
	v->a[2746] = entry(1, false);
	v->a[2747] = reduce(sym_heredoc_redirect, 6, 0, 68);
	v->a[2748] = entry(2, false);
	v->a[2749] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2750] = shift_repeat(1821);
	v->a[2751] = entry(2, false);
	v->a[2752] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2753] = shift_repeat(287);
	v->a[2754] = entry(2, true);
	v->a[2755] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2756] = shift_repeat(2090);
	v->a[2757] = entry(1, true);
	v->a[2758] = reduce(sym_heredoc_redirect, 6, 0, 69);
	v->a[2759] = entry(1, false);
	parse_actions_entries_138(v);
}

void	parse_actions_entries_138(t_parse_actions_entries_array *v)
{
	v->a[2760] = reduce(sym_heredoc_redirect, 6, 0, 69);
	v->a[2761] = entry(1, true);
	v->a[2762] = reduce(sym_heredoc_redirect, 6, 0, 70);
	v->a[2763] = entry(1, false);
	v->a[2764] = reduce(sym_heredoc_redirect, 6, 0, 70);
	v->a[2765] = entry(1, true);
	v->a[2766] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2767] = entry(1, false);
	v->a[2768] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2769] = entry(1, true);
	v->a[2770] = shift(2083);
	v->a[2771] = entry(1, true);
	v->a[2772] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2773] = entry(1, false);
	v->a[2774] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2775] = entry(1, false);
	v->a[2776] = shift(867);
	v->a[2777] = entry(1, true);
	v->a[2778] = shift(866);
	v->a[2779] = entry(1, false);
	parse_actions_entries_139(v);
}

void	parse_actions_entries_139(t_parse_actions_entries_array *v)
{
	v->a[2780] = shift(864);
	v->a[2781] = entry(1, false);
	v->a[2782] = shift(863);
	v->a[2783] = entry(1, true);
	v->a[2784] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2785] = entry(1, false);
	v->a[2786] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2787] = entry(2, false);
	v->a[2788] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2789] = shift_repeat(1783);
	v->a[2790] = entry(2, false);
	v->a[2791] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2792] = shift_repeat(264);
	v->a[2793] = entry(2, true);
	v->a[2794] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2795] = shift_repeat(2083);
	v->a[2796] = entry(1, true);
	v->a[2797] = reduce(sym_while_statement, 3, 0, 21);
	v->a[2798] = entry(1, false);
	v->a[2799] = reduce(sym_while_statement, 3, 0, 21);
	parse_actions_entries_140(v);
}

/* EOF parse_actions_entries_27.c */
