/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_758.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3790(t_small_parse_table_array *v)
{
	v->a[75800] = anon_sym_GT_AMP;
	v->a[75801] = anon_sym_LT_LT;
	v->a[75802] = actions(565);
	v->a[75803] = 9;
	v->a[75804] = sym_file_descriptor;
	v->a[75805] = anon_sym_AMP_AMP;
	v->a[75806] = anon_sym_PIPE_PIPE;
	v->a[75807] = anon_sym_GT_GT;
	v->a[75808] = anon_sym_AMP_GT_GT;
	v->a[75809] = anon_sym_GT_PIPE;
	v->a[75810] = anon_sym_LT_AMP_DASH;
	v->a[75811] = anon_sym_GT_AMP_DASH;
	v->a[75812] = anon_sym_LT_LT_DASH;
	v->a[75813] = 14;
	v->a[75814] = actions(3);
	v->a[75815] = 1;
	v->a[75816] = sym_comment;
	v->a[75817] = actions(2905);
	v->a[75818] = 1;
	v->a[75819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3791(v);
}

void	small_parse_table_3791(t_small_parse_table_array *v)
{
	v->a[75820] = actions(2907);
	v->a[75821] = 1;
	v->a[75822] = anon_sym_DOLLAR;
	v->a[75823] = actions(2909);
	v->a[75824] = 1;
	v->a[75825] = anon_sym_DQUOTE;
	v->a[75826] = actions(2911);
	v->a[75827] = 1;
	v->a[75828] = aux_sym_number_token1;
	v->a[75829] = actions(2913);
	v->a[75830] = 1;
	v->a[75831] = aux_sym_number_token2;
	v->a[75832] = actions(2915);
	v->a[75833] = 1;
	v->a[75834] = anon_sym_DOLLAR_LBRACE;
	v->a[75835] = actions(2917);
	v->a[75836] = 1;
	v->a[75837] = anon_sym_DOLLAR_LPAREN;
	v->a[75838] = actions(2919);
	v->a[75839] = 1;
	small_parse_table_3792(v);
}

void	small_parse_table_3792(t_small_parse_table_array *v)
{
	v->a[75840] = anon_sym_BQUOTE;
	v->a[75841] = actions(2921);
	v->a[75842] = 1;
	v->a[75843] = sym__comment_word;
	v->a[75844] = actions(2923);
	v->a[75845] = 1;
	v->a[75846] = sym__empty_value;
	v->a[75847] = state(744);
	v->a[75848] = 1;
	v->a[75849] = sym_concatenation;
	v->a[75850] = actions(3058);
	v->a[75851] = 2;
	v->a[75852] = sym_raw_string;
	v->a[75853] = sym_word;
	v->a[75854] = state(465);
	v->a[75855] = 6;
	v->a[75856] = sym_arithmetic_expansion;
	v->a[75857] = sym_string;
	v->a[75858] = sym_number;
	v->a[75859] = sym_simple_expansion;
	small_parse_table_3793(v);
}

void	small_parse_table_3793(t_small_parse_table_array *v)
{
	v->a[75860] = sym_expansion;
	v->a[75861] = sym_command_substitution;
	v->a[75862] = 14;
	v->a[75863] = actions(3);
	v->a[75864] = 1;
	v->a[75865] = sym_comment;
	v->a[75866] = actions(2873);
	v->a[75867] = 1;
	v->a[75868] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75869] = actions(2875);
	v->a[75870] = 1;
	v->a[75871] = anon_sym_DOLLAR;
	v->a[75872] = actions(2877);
	v->a[75873] = 1;
	v->a[75874] = anon_sym_DQUOTE;
	v->a[75875] = actions(2879);
	v->a[75876] = 1;
	v->a[75877] = aux_sym_number_token1;
	v->a[75878] = actions(2881);
	v->a[75879] = 1;
	small_parse_table_3794(v);
}

void	small_parse_table_3794(t_small_parse_table_array *v)
{
	v->a[75880] = aux_sym_number_token2;
	v->a[75881] = actions(2883);
	v->a[75882] = 1;
	v->a[75883] = anon_sym_DOLLAR_LBRACE;
	v->a[75884] = actions(2885);
	v->a[75885] = 1;
	v->a[75886] = anon_sym_DOLLAR_LPAREN;
	v->a[75887] = actions(2887);
	v->a[75888] = 1;
	v->a[75889] = anon_sym_BQUOTE;
	v->a[75890] = actions(2889);
	v->a[75891] = 1;
	v->a[75892] = sym__comment_word;
	v->a[75893] = actions(2891);
	v->a[75894] = 1;
	v->a[75895] = sym__empty_value;
	v->a[75896] = state(1049);
	v->a[75897] = 1;
	v->a[75898] = sym_concatenation;
	v->a[75899] = actions(3060);
	small_parse_table_3795(v);
}

/* EOF small_parse_table_758.c */
