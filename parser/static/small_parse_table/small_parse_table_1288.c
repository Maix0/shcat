/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1288.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6440(t_small_parse_table_array *v)
{
	v->a[128800] = aux_sym_number_token1;
	v->a[128801] = aux_sym_number_token2;
	v->a[128802] = anon_sym_DOLLAR_LPAREN;
	v->a[128803] = sym_word;
	v->a[128804] = actions(7400);
	v->a[128805] = 11;
	v->a[128806] = sym_test_operator;
	v->a[128807] = sym_extglob_pattern;
	v->a[128808] = sym__brace_start;
	v->a[128809] = anon_sym_LPAREN;
	v->a[128810] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128811] = sym__special_character;
	v->a[128812] = anon_sym_DQUOTE;
	v->a[128813] = sym_raw_string;
	v->a[128814] = anon_sym_DOLLAR_LBRACE;
	v->a[128815] = anon_sym_BQUOTE;
	v->a[128816] = anon_sym_DOLLAR_BQUOTE;
	v->a[128817] = 4;
	v->a[128818] = actions(57);
	v->a[128819] = 1;
	small_parse_table_6441(v);
}

void	small_parse_table_6441(t_small_parse_table_array *v)
{
	v->a[128820] = sym_comment;
	v->a[128821] = actions(7404);
	v->a[128822] = 1;
	v->a[128823] = anon_sym_esac;
	v->a[128824] = actions(7402);
	v->a[128825] = 5;
	v->a[128826] = anon_sym_DOLLAR;
	v->a[128827] = aux_sym_number_token1;
	v->a[128828] = aux_sym_number_token2;
	v->a[128829] = anon_sym_DOLLAR_LPAREN;
	v->a[128830] = sym_word;
	v->a[128831] = actions(7406);
	v->a[128832] = 11;
	v->a[128833] = sym_test_operator;
	v->a[128834] = sym_extglob_pattern;
	v->a[128835] = sym__brace_start;
	v->a[128836] = anon_sym_LPAREN;
	v->a[128837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128838] = sym__special_character;
	v->a[128839] = anon_sym_DQUOTE;
	small_parse_table_6442(v);
}

void	small_parse_table_6442(t_small_parse_table_array *v)
{
	v->a[128840] = sym_raw_string;
	v->a[128841] = anon_sym_DOLLAR_LBRACE;
	v->a[128842] = anon_sym_BQUOTE;
	v->a[128843] = anon_sym_DOLLAR_BQUOTE;
	v->a[128844] = 3;
	v->a[128845] = actions(57);
	v->a[128846] = 1;
	v->a[128847] = sym_comment;
	v->a[128848] = actions(6165);
	v->a[128849] = 7;
	v->a[128850] = anon_sym_PIPE;
	v->a[128851] = anon_sym_LT;
	v->a[128852] = anon_sym_GT;
	v->a[128853] = anon_sym_AMP_GT;
	v->a[128854] = anon_sym_LT_AMP;
	v->a[128855] = anon_sym_GT_AMP;
	v->a[128856] = anon_sym_LT_LT;
	v->a[128857] = actions(6167);
	v->a[128858] = 10;
	v->a[128859] = sym_file_descriptor;
	small_parse_table_6443(v);
}

void	small_parse_table_6443(t_small_parse_table_array *v)
{
	v->a[128860] = anon_sym_PIPE_AMP;
	v->a[128861] = anon_sym_AMP_AMP;
	v->a[128862] = anon_sym_PIPE_PIPE;
	v->a[128863] = anon_sym_GT_GT;
	v->a[128864] = anon_sym_AMP_GT_GT;
	v->a[128865] = anon_sym_GT_PIPE;
	v->a[128866] = anon_sym_LT_AMP_DASH;
	v->a[128867] = anon_sym_GT_AMP_DASH;
	v->a[128868] = anon_sym_LT_LT_DASH;
	v->a[128869] = 6;
	v->a[128870] = actions(3);
	v->a[128871] = 1;
	v->a[128872] = sym_comment;
	v->a[128873] = actions(7278);
	v->a[128874] = 1;
	v->a[128875] = aux_sym_concatenation_token1;
	v->a[128876] = actions(7280);
	v->a[128877] = 1;
	v->a[128878] = sym__concat;
	v->a[128879] = state(2723);
	small_parse_table_6444(v);
}

void	small_parse_table_6444(t_small_parse_table_array *v)
{
	v->a[128880] = 1;
	v->a[128881] = aux_sym_concatenation_repeat1;
	v->a[128882] = actions(1390);
	v->a[128883] = 2;
	v->a[128884] = sym_file_descriptor;
	v->a[128885] = aux_sym_heredoc_redirect_token1;
	v->a[128886] = actions(1388);
	v->a[128887] = 12;
	v->a[128888] = anon_sym_AMP_AMP;
	v->a[128889] = anon_sym_PIPE_PIPE;
	v->a[128890] = anon_sym_LT;
	v->a[128891] = anon_sym_GT;
	v->a[128892] = anon_sym_GT_GT;
	v->a[128893] = anon_sym_AMP_GT;
	v->a[128894] = anon_sym_AMP_GT_GT;
	v->a[128895] = anon_sym_LT_AMP;
	v->a[128896] = anon_sym_GT_AMP;
	v->a[128897] = anon_sym_GT_PIPE;
	v->a[128898] = anon_sym_LT_AMP_DASH;
	v->a[128899] = anon_sym_GT_AMP_DASH;
	small_parse_table_6445(v);
}

/* EOF small_parse_table_1288.c */
