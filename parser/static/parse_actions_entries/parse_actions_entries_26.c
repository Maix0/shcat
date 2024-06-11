/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_26.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_130(t_parse_actions_entries_array *v)
{
	v->a[2600] = entry(1, true);
	v->a[2601] = shift(897);
	v->a[2602] = entry(1, true);
	v->a[2603] = shift(2030);
	v->a[2604] = entry(1, true);
	v->a[2605] = reduce(sym_case_statement, 6, 0, 54);
	v->a[2606] = entry(1, false);
	v->a[2607] = reduce(sym_case_statement, 6, 0, 54);
	v->a[2608] = entry(1, true);
	v->a[2609] = reduce(sym_case_statement, 6, 0, 36);
	v->a[2610] = entry(1, false);
	v->a[2611] = reduce(sym_case_statement, 6, 0, 36);
	v->a[2612] = entry(1, true);
	v->a[2613] = reduce(sym_case_statement, 6, 0, 57);
	v->a[2614] = entry(1, false);
	v->a[2615] = reduce(sym_case_statement, 6, 0, 57);
	v->a[2616] = entry(1, true);
	v->a[2617] = reduce(sym_heredoc_redirect, 7, 0, 76);
	v->a[2618] = entry(1, false);
	v->a[2619] = reduce(sym_heredoc_redirect, 7, 0, 76);
	parse_actions_entries_131(v);
}

void	parse_actions_entries_131(t_parse_actions_entries_array *v)
{
	v->a[2620] = entry(1, true);
	v->a[2621] = reduce(sym_if_statement, 5, 0, 46);
	v->a[2622] = entry(1, false);
	v->a[2623] = reduce(sym_if_statement, 5, 0, 46);
	v->a[2624] = entry(1, false);
	v->a[2625] = reduce(sym_function_definition, 4, 0, 42);
	v->a[2626] = entry(1, true);
	v->a[2627] = reduce(sym_function_definition, 4, 0, 42);
	v->a[2628] = entry(1, true);
	v->a[2629] = shift(2086);
	v->a[2630] = entry(1, true);
	v->a[2631] = shift(695);
	v->a[2632] = entry(1, true);
	v->a[2633] = reduce(sym_if_statement, 6, 0, 52);
	v->a[2634] = entry(1, false);
	v->a[2635] = reduce(sym_if_statement, 6, 0, 52);
	v->a[2636] = entry(1, true);
	v->a[2637] = reduce(sym_if_statement, 6, 0, 51);
	v->a[2638] = entry(1, false);
	v->a[2639] = reduce(sym_if_statement, 6, 0, 51);
	parse_actions_entries_132(v);
}

void	parse_actions_entries_132(t_parse_actions_entries_array *v)
{
	v->a[2640] = entry(1, false);
	v->a[2641] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2642] = entry(2, false);
	v->a[2643] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2644] = shift_repeat(1781);
	v->a[2645] = entry(2, false);
	v->a[2646] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2647] = shift_repeat(244);
	v->a[2648] = entry(1, true);
	v->a[2649] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2650] = entry(2, true);
	v->a[2651] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2652] = shift_repeat(2086);
	v->a[2653] = entry(1, true);
	v->a[2654] = reduce(sym_for_statement, 6, 0, 50);
	v->a[2655] = entry(1, false);
	v->a[2656] = reduce(sym_for_statement, 6, 0, 50);
	v->a[2657] = entry(1, true);
	v->a[2658] = reduce(sym_heredoc_redirect, 4, 0, 1);
	v->a[2659] = entry(1, false);
	parse_actions_entries_133(v);
}

void	parse_actions_entries_133(t_parse_actions_entries_array *v)
{
	v->a[2660] = reduce(sym_heredoc_redirect, 4, 0, 1);
	v->a[2661] = entry(1, true);
	v->a[2662] = reduce(sym_if_statement, 5, 0, 44);
	v->a[2663] = entry(1, false);
	v->a[2664] = reduce(sym_if_statement, 5, 0, 44);
	v->a[2665] = entry(1, true);
	v->a[2666] = shift(908);
	v->a[2667] = entry(1, true);
	v->a[2668] = reduce(sym_if_statement, 7, 0, 62);
	v->a[2669] = entry(1, false);
	v->a[2670] = reduce(sym_if_statement, 7, 0, 62);
	v->a[2671] = entry(1, true);
	v->a[2672] = reduce(sym_heredoc_redirect, 5, 0, 60);
	v->a[2673] = entry(1, false);
	v->a[2674] = reduce(sym_heredoc_redirect, 5, 0, 60);
	v->a[2675] = entry(1, true);
	v->a[2676] = reduce(sym_if_statement, 6, 0, 53);
	v->a[2677] = entry(1, false);
	v->a[2678] = reduce(sym_if_statement, 6, 0, 53);
	v->a[2679] = entry(1, true);
	parse_actions_entries_134(v);
}

void	parse_actions_entries_134(t_parse_actions_entries_array *v)
{
	v->a[2680] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2681] = entry(1, false);
	v->a[2682] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2683] = entry(1, false);
	v->a[2684] = reduce(sym_redirected_statement, 1, -1, 5);
	v->a[2685] = entry(1, true);
	v->a[2686] = reduce(sym_redirected_statement, 1, -1, 5);
	v->a[2687] = entry(1, true);
	v->a[2688] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2689] = entry(1, false);
	v->a[2690] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2691] = entry(1, true);
	v->a[2692] = reduce(sym_command, 2, 0, 4);
	v->a[2693] = entry(1, false);
	v->a[2694] = reduce(sym_command, 2, 0, 4);
	v->a[2695] = entry(1, true);
	v->a[2696] = reduce(sym_heredoc_redirect, 5, 0, 1);
	v->a[2697] = entry(1, false);
	v->a[2698] = reduce(sym_heredoc_redirect, 5, 0, 1);
	v->a[2699] = entry(1, true);
	parse_actions_entries_135(v);
}

/* EOF parse_actions_entries_26.c */
