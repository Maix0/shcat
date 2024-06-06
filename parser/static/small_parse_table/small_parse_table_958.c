/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_958.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4790(t_small_parse_table_array *v)
{
	v->a[95800] = aux_sym_number_token1;
	v->a[95801] = aux_sym_number_token2;
	v->a[95802] = anon_sym_DOLLAR_LPAREN;
	v->a[95803] = sym_word;
	v->a[95804] = actions(2719);
	v->a[95805] = 16;
	v->a[95806] = sym_file_descriptor;
	v->a[95807] = sym_variable_name;
	v->a[95808] = sym_test_operator;
	v->a[95809] = sym__brace_start;
	v->a[95810] = anon_sym_GT_GT;
	v->a[95811] = anon_sym_AMP_GT_GT;
	v->a[95812] = anon_sym_GT_PIPE;
	v->a[95813] = anon_sym_LT_AMP_DASH;
	v->a[95814] = anon_sym_GT_AMP_DASH;
	v->a[95815] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95816] = sym__special_character;
	v->a[95817] = anon_sym_DQUOTE;
	v->a[95818] = sym_raw_string;
	v->a[95819] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4791(v);
}

void	small_parse_table_4791(t_small_parse_table_array *v)
{
	v->a[95820] = anon_sym_BQUOTE;
	v->a[95821] = anon_sym_DOLLAR_BQUOTE;
	v->a[95822] = 3;
	v->a[95823] = actions(3);
	v->a[95824] = 1;
	v->a[95825] = sym_comment;
	v->a[95826] = actions(2774);
	v->a[95827] = 4;
	v->a[95828] = sym_file_descriptor;
	v->a[95829] = sym__concat;
	v->a[95830] = ts_builtin_sym_end;
	v->a[95831] = aux_sym_heredoc_redirect_token1;
	v->a[95832] = actions(2772);
	v->a[95833] = 22;
	v->a[95834] = anon_sym_PIPE;
	v->a[95835] = anon_sym_RPAREN;
	v->a[95836] = anon_sym_SEMI_SEMI;
	v->a[95837] = anon_sym_PIPE_AMP;
	v->a[95838] = anon_sym_AMP_AMP;
	v->a[95839] = anon_sym_PIPE_PIPE;
	small_parse_table_4792(v);
}

void	small_parse_table_4792(t_small_parse_table_array *v)
{
	v->a[95840] = anon_sym_LT;
	v->a[95841] = anon_sym_GT;
	v->a[95842] = anon_sym_GT_GT;
	v->a[95843] = anon_sym_AMP_GT;
	v->a[95844] = anon_sym_AMP_GT_GT;
	v->a[95845] = anon_sym_LT_AMP;
	v->a[95846] = anon_sym_GT_AMP;
	v->a[95847] = anon_sym_GT_PIPE;
	v->a[95848] = anon_sym_LT_AMP_DASH;
	v->a[95849] = anon_sym_GT_AMP_DASH;
	v->a[95850] = anon_sym_LT_LT;
	v->a[95851] = anon_sym_LT_LT_DASH;
	v->a[95852] = anon_sym_AMP;
	v->a[95853] = aux_sym_concatenation_token1;
	v->a[95854] = anon_sym_BQUOTE;
	v->a[95855] = anon_sym_SEMI;
	v->a[95856] = 3;
	v->a[95857] = actions(3);
	v->a[95858] = 1;
	v->a[95859] = sym_comment;
	small_parse_table_4793(v);
}

void	small_parse_table_4793(t_small_parse_table_array *v)
{
	v->a[95860] = actions(3117);
	v->a[95861] = 3;
	v->a[95862] = sym_file_descriptor;
	v->a[95863] = sym__concat;
	v->a[95864] = aux_sym_heredoc_redirect_token1;
	v->a[95865] = actions(3115);
	v->a[95866] = 23;
	v->a[95867] = anon_sym_esac;
	v->a[95868] = anon_sym_PIPE;
	v->a[95869] = anon_sym_SEMI_SEMI;
	v->a[95870] = anon_sym_SEMI_AMP;
	v->a[95871] = anon_sym_SEMI_SEMI_AMP;
	v->a[95872] = anon_sym_PIPE_AMP;
	v->a[95873] = anon_sym_AMP_AMP;
	v->a[95874] = anon_sym_PIPE_PIPE;
	v->a[95875] = anon_sym_LT;
	v->a[95876] = anon_sym_GT;
	v->a[95877] = anon_sym_GT_GT;
	v->a[95878] = anon_sym_AMP_GT;
	v->a[95879] = anon_sym_AMP_GT_GT;
	small_parse_table_4794(v);
}

void	small_parse_table_4794(t_small_parse_table_array *v)
{
	v->a[95880] = anon_sym_LT_AMP;
	v->a[95881] = anon_sym_GT_AMP;
	v->a[95882] = anon_sym_GT_PIPE;
	v->a[95883] = anon_sym_LT_AMP_DASH;
	v->a[95884] = anon_sym_GT_AMP_DASH;
	v->a[95885] = anon_sym_LT_LT;
	v->a[95886] = anon_sym_LT_LT_DASH;
	v->a[95887] = anon_sym_AMP;
	v->a[95888] = aux_sym_concatenation_token1;
	v->a[95889] = anon_sym_SEMI;
	v->a[95890] = 5;
	v->a[95891] = actions(3);
	v->a[95892] = 1;
	v->a[95893] = sym_comment;
	v->a[95894] = actions(5262);
	v->a[95895] = 1;
	v->a[95896] = sym__special_character;
	v->a[95897] = state(2034);
	v->a[95898] = 1;
	v->a[95899] = aux_sym__literal_repeat1;
	small_parse_table_4795(v);
}

/* EOF small_parse_table_958.c */
