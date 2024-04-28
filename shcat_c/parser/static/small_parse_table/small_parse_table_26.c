/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_26.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_130(t_small_parse_table_array *v)
{
	v->a[2600] = anon_sym_PIPE_PIPE;
	v->a[2601] = anon_sym_AMP_AMP;
	v->a[2602] = anon_sym_PIPE;
	v->a[2603] = anon_sym_AMP;
	v->a[2604] = anon_sym_LT;
	v->a[2605] = anon_sym_GT;
	v->a[2606] = anon_sym_LT_LT;
	v->a[2607] = anon_sym_GT_GT;
	v->a[2608] = anon_sym_esac;
	v->a[2609] = anon_sym_SEMI_SEMI;
	v->a[2610] = anon_sym_SEMI_AMP;
	v->a[2611] = anon_sym_SEMI_SEMI_AMP;
	v->a[2612] = anon_sym_PIPE_AMP;
	v->a[2613] = anon_sym_AMP_GT;
	v->a[2614] = anon_sym_AMP_GT_GT;
	v->a[2615] = anon_sym_LT_AMP;
	v->a[2616] = anon_sym_GT_AMP;
	v->a[2617] = anon_sym_GT_PIPE;
	v->a[2618] = anon_sym_LT_AMP_DASH;
	v->a[2619] = anon_sym_GT_AMP_DASH;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = anon_sym_LT_LT_DASH;
	v->a[2621] = 8;
	v->a[2622] = actions(3);
	v->a[2623] = 1;
	v->a[2624] = sym_comment;
	v->a[2625] = actions(1418);
	v->a[2626] = 1;
	v->a[2627] = anon_sym_DQUOTE;
	v->a[2628] = actions(1807);
	v->a[2629] = 1;
	v->a[2630] = sym_variable_name;
	v->a[2631] = state(922);
	v->a[2632] = 1;
	v->a[2633] = sym_string;
	v->a[2634] = actions(1805);
	v->a[2635] = 2;
	v->a[2636] = aux_sym__simple_variable_name_token1;
	v->a[2637] = aux_sym__multiline_variable_name_token1;
	v->a[2638] = actions(1241);
	v->a[2639] = 4;
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = sym_file_descriptor;
	v->a[2641] = sym_test_operator;
	v->a[2642] = sym__bare_dollar;
	v->a[2643] = sym__brace_start;
	v->a[2644] = actions(1803);
	v->a[2645] = 9;
	v->a[2646] = anon_sym_DASH;
	v->a[2647] = anon_sym_STAR;
	v->a[2648] = anon_sym_BANG;
	v->a[2649] = anon_sym_QMARK;
	v->a[2650] = anon_sym_DOLLAR;
	v->a[2651] = anon_sym_POUND;
	v->a[2652] = anon_sym_AT2;
	v->a[2653] = anon_sym_0;
	v->a[2654] = anon_sym__;
	v->a[2655] = actions(1239);
	v->a[2656] = 41;
	v->a[2657] = anon_sym_LPAREN_LPAREN;
	v->a[2658] = anon_sym_SEMI;
	v->a[2659] = anon_sym_PIPE_PIPE;
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = anon_sym_AMP_AMP;
	v->a[2661] = anon_sym_PIPE;
	v->a[2662] = anon_sym_AMP;
	v->a[2663] = anon_sym_EQ_EQ;
	v->a[2664] = anon_sym_LT;
	v->a[2665] = anon_sym_GT;
	v->a[2666] = anon_sym_LT_LT;
	v->a[2667] = anon_sym_GT_GT;
	v->a[2668] = anon_sym_esac;
	v->a[2669] = anon_sym_SEMI_SEMI;
	v->a[2670] = anon_sym_SEMI_AMP;
	v->a[2671] = anon_sym_SEMI_SEMI_AMP;
	v->a[2672] = anon_sym_PIPE_AMP;
	v->a[2673] = anon_sym_EQ_TILDE;
	v->a[2674] = anon_sym_AMP_GT;
	v->a[2675] = anon_sym_AMP_GT_GT;
	v->a[2676] = anon_sym_LT_AMP;
	v->a[2677] = anon_sym_GT_AMP;
	v->a[2678] = anon_sym_GT_PIPE;
	v->a[2679] = anon_sym_LT_AMP_DASH;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = anon_sym_GT_AMP_DASH;
	v->a[2681] = anon_sym_LT_LT_DASH;
	v->a[2682] = aux_sym_heredoc_redirect_token1;
	v->a[2683] = anon_sym_LT_LT_LT;
	v->a[2684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2685] = anon_sym_DOLLAR_LBRACK;
	v->a[2686] = sym__special_character;
	v->a[2687] = sym_raw_string;
	v->a[2688] = sym_ansi_c_string;
	v->a[2689] = aux_sym_number_token1;
	v->a[2690] = aux_sym_number_token2;
	v->a[2691] = anon_sym_DOLLAR_LBRACE;
	v->a[2692] = anon_sym_DOLLAR_LPAREN;
	v->a[2693] = anon_sym_BQUOTE;
	v->a[2694] = anon_sym_DOLLAR_BQUOTE;
	v->a[2695] = anon_sym_LT_LPAREN;
	v->a[2696] = anon_sym_GT_LPAREN;
	v->a[2697] = sym_word;
	v->a[2698] = 8;
	v->a[2699] = actions(3);
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
