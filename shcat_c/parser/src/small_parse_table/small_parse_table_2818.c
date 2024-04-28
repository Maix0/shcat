/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2818.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14090(t_small_parse_table_array *v)
{
	v->a[281800] = anon_sym_GT_PIPE;
	v->a[281801] = anon_sym_LT_AMP_DASH;
	v->a[281802] = anon_sym_GT_AMP_DASH;
	v->a[281803] = anon_sym_LT_LT_DASH;
	v->a[281804] = 3;
	v->a[281805] = actions(71);
	v->a[281806] = 1;
	v->a[281807] = sym_comment;
	v->a[281808] = actions(12701);
	v->a[281809] = 6;
	v->a[281810] = anon_sym_LPAREN;
	v->a[281811] = anon_sym_DOLLAR;
	v->a[281812] = aux_sym_number_token1;
	v->a[281813] = aux_sym_number_token2;
	v->a[281814] = anon_sym_DOLLAR_LPAREN;
	v->a[281815] = sym_word;
	v->a[281816] = actions(12703);
	v->a[281817] = 15;
	v->a[281818] = sym_test_operator;
	v->a[281819] = sym_extglob_pattern;
	small_parse_table_14091(v);
}

void	small_parse_table_14091(t_small_parse_table_array *v)
{
	v->a[281820] = sym__brace_start;
	v->a[281821] = anon_sym_LPAREN_LPAREN;
	v->a[281822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[281823] = anon_sym_DOLLAR_LBRACK;
	v->a[281824] = sym__special_character;
	v->a[281825] = anon_sym_DQUOTE;
	v->a[281826] = sym_raw_string;
	v->a[281827] = sym_ansi_c_string;
	v->a[281828] = anon_sym_DOLLAR_LBRACE;
	v->a[281829] = anon_sym_BQUOTE;
	v->a[281830] = anon_sym_DOLLAR_BQUOTE;
	v->a[281831] = anon_sym_LT_LPAREN;
	v->a[281832] = anon_sym_GT_LPAREN;
	v->a[281833] = 5;
	v->a[281834] = actions(71);
	v->a[281835] = 1;
	v->a[281836] = sym_comment;
	v->a[281837] = actions(12668);
	v->a[281838] = 1;
	v->a[281839] = sym__special_character;
	small_parse_table_14092(v);
}

void	small_parse_table_14092(t_small_parse_table_array *v)
{
	v->a[281840] = state(5388);
	v->a[281841] = 1;
	v->a[281842] = aux_sym__literal_repeat1;
	v->a[281843] = actions(4564);
	v->a[281844] = 7;
	v->a[281845] = anon_sym_PIPE;
	v->a[281846] = anon_sym_LT;
	v->a[281847] = anon_sym_GT;
	v->a[281848] = anon_sym_LT_LT;
	v->a[281849] = anon_sym_AMP_GT;
	v->a[281850] = anon_sym_LT_AMP;
	v->a[281851] = anon_sym_GT_AMP;
	v->a[281852] = actions(4566);
	v->a[281853] = 12;
	v->a[281854] = sym_file_descriptor;
	v->a[281855] = anon_sym_PIPE_PIPE;
	v->a[281856] = anon_sym_AMP_AMP;
	v->a[281857] = anon_sym_GT_GT;
	v->a[281858] = anon_sym_PIPE_AMP;
	v->a[281859] = anon_sym_RBRACK;
	small_parse_table_14093(v);
}

void	small_parse_table_14093(t_small_parse_table_array *v)
{
	v->a[281860] = anon_sym_AMP_GT_GT;
	v->a[281861] = anon_sym_GT_PIPE;
	v->a[281862] = anon_sym_LT_AMP_DASH;
	v->a[281863] = anon_sym_GT_AMP_DASH;
	v->a[281864] = anon_sym_LT_LT_DASH;
	v->a[281865] = anon_sym_LT_LT_LT;
	v->a[281866] = 6;
	v->a[281867] = actions(3);
	v->a[281868] = 1;
	v->a[281869] = sym_comment;
	v->a[281870] = actions(11651);
	v->a[281871] = 1;
	v->a[281872] = aux_sym_concatenation_token1;
	v->a[281873] = actions(11653);
	v->a[281874] = 1;
	v->a[281875] = sym__concat;
	v->a[281876] = state(5392);
	v->a[281877] = 1;
	v->a[281878] = aux_sym_concatenation_repeat1;
	v->a[281879] = actions(2074);
	small_parse_table_14094(v);
}

void	small_parse_table_14094(t_small_parse_table_array *v)
{
	v->a[281880] = 2;
	v->a[281881] = sym_file_descriptor;
	v->a[281882] = aux_sym_heredoc_redirect_token1;
	v->a[281883] = actions(2072);
	v->a[281884] = 16;
	v->a[281885] = anon_sym_PIPE_PIPE;
	v->a[281886] = anon_sym_AMP_AMP;
	v->a[281887] = anon_sym_PIPE;
	v->a[281888] = anon_sym_LT;
	v->a[281889] = anon_sym_GT;
	v->a[281890] = anon_sym_LT_LT;
	v->a[281891] = anon_sym_GT_GT;
	v->a[281892] = anon_sym_PIPE_AMP;
	v->a[281893] = anon_sym_AMP_GT;
	v->a[281894] = anon_sym_AMP_GT_GT;
	v->a[281895] = anon_sym_LT_AMP;
	v->a[281896] = anon_sym_GT_AMP;
	v->a[281897] = anon_sym_GT_PIPE;
	v->a[281898] = anon_sym_LT_AMP_DASH;
	v->a[281899] = anon_sym_GT_AMP_DASH;
	small_parse_table_14095(v);
}

/* EOF small_parse_table_2818.c */
