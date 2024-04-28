/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1858.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9290(t_small_parse_table_array *v)
{
	v->a[185800] = anon_sym_DQUOTE;
	v->a[185801] = actions(7234);
	v->a[185802] = 1;
	v->a[185803] = anon_sym_DOLLAR_LBRACE;
	v->a[185804] = actions(7236);
	v->a[185805] = 1;
	v->a[185806] = anon_sym_BQUOTE;
	v->a[185807] = actions(7238);
	v->a[185808] = 1;
	v->a[185809] = anon_sym_DOLLAR_BQUOTE;
	v->a[185810] = state(6426);
	v->a[185811] = 1;
	v->a[185812] = aux_sym__literal_repeat1;
	v->a[185813] = state(7049);
	v->a[185814] = 1;
	v->a[185815] = sym_last_case_item;
	v->a[185816] = actions(7224);
	v->a[185817] = 2;
	v->a[185818] = anon_sym_LPAREN_LPAREN;
	v->a[185819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_9291(v);
}

void	small_parse_table_9291(t_small_parse_table_array *v)
{
	v->a[185820] = actions(7232);
	v->a[185821] = 2;
	v->a[185822] = sym_raw_string;
	v->a[185823] = sym_ansi_c_string;
	v->a[185824] = actions(7240);
	v->a[185825] = 2;
	v->a[185826] = anon_sym_LT_LPAREN;
	v->a[185827] = anon_sym_GT_LPAREN;
	v->a[185828] = state(3477);
	v->a[185829] = 2;
	v->a[185830] = sym_case_item;
	v->a[185831] = aux_sym_case_statement_repeat1;
	v->a[185832] = state(6695);
	v->a[185833] = 2;
	v->a[185834] = sym_concatenation;
	v->a[185835] = sym__extglob_blob;
	v->a[185836] = state(6303);
	v->a[185837] = 9;
	v->a[185838] = sym_arithmetic_expansion;
	v->a[185839] = sym_brace_expression;
	small_parse_table_9292(v);
}

void	small_parse_table_9292(t_small_parse_table_array *v)
{
	v->a[185840] = sym_string;
	v->a[185841] = sym_translated_string;
	v->a[185842] = sym_number;
	v->a[185843] = sym_simple_expansion;
	v->a[185844] = sym_expansion;
	v->a[185845] = sym_command_substitution;
	v->a[185846] = sym_process_substitution;
	v->a[185847] = 3;
	v->a[185848] = actions(71);
	v->a[185849] = 1;
	v->a[185850] = sym_comment;
	v->a[185851] = actions(1336);
	v->a[185852] = 14;
	v->a[185853] = anon_sym_EQ;
	v->a[185854] = anon_sym_PIPE;
	v->a[185855] = anon_sym_CARET;
	v->a[185856] = anon_sym_AMP;
	v->a[185857] = anon_sym_LT;
	v->a[185858] = anon_sym_GT;
	v->a[185859] = anon_sym_LT_LT;
	small_parse_table_9293(v);
}

void	small_parse_table_9293(t_small_parse_table_array *v)
{
	v->a[185860] = anon_sym_GT_GT;
	v->a[185861] = anon_sym_PLUS;
	v->a[185862] = anon_sym_DASH;
	v->a[185863] = anon_sym_STAR;
	v->a[185864] = anon_sym_SLASH;
	v->a[185865] = anon_sym_PERCENT;
	v->a[185866] = anon_sym_STAR_STAR;
	v->a[185867] = actions(1338);
	v->a[185868] = 22;
	v->a[185869] = anon_sym_PLUS_PLUS;
	v->a[185870] = anon_sym_DASH_DASH;
	v->a[185871] = anon_sym_PLUS_EQ;
	v->a[185872] = anon_sym_DASH_EQ;
	v->a[185873] = anon_sym_STAR_EQ;
	v->a[185874] = anon_sym_SLASH_EQ;
	v->a[185875] = anon_sym_PERCENT_EQ;
	v->a[185876] = anon_sym_STAR_STAR_EQ;
	v->a[185877] = anon_sym_LT_LT_EQ;
	v->a[185878] = anon_sym_GT_GT_EQ;
	v->a[185879] = anon_sym_AMP_EQ;
	small_parse_table_9294(v);
}

void	small_parse_table_9294(t_small_parse_table_array *v)
{
	v->a[185880] = anon_sym_CARET_EQ;
	v->a[185881] = anon_sym_PIPE_EQ;
	v->a[185882] = anon_sym_PIPE_PIPE;
	v->a[185883] = anon_sym_AMP_AMP;
	v->a[185884] = anon_sym_EQ_EQ;
	v->a[185885] = anon_sym_BANG_EQ;
	v->a[185886] = anon_sym_LT_EQ;
	v->a[185887] = anon_sym_GT_EQ;
	v->a[185888] = anon_sym_RPAREN;
	v->a[185889] = anon_sym_EQ_TILDE;
	v->a[185890] = anon_sym_QMARK;
	v->a[185891] = 24;
	v->a[185892] = actions(71);
	v->a[185893] = 1;
	v->a[185894] = sym_comment;
	v->a[185895] = actions(6474);
	v->a[185896] = 1;
	v->a[185897] = sym_word;
	v->a[185898] = actions(6480);
	v->a[185899] = 1;
	small_parse_table_9295(v);
}

/* EOF small_parse_table_1858.c */
