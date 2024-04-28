/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_398.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1990(t_small_parse_table_array *v)
{
	v->a[39800] = anon_sym_BQUOTE;
	v->a[39801] = anon_sym_DOLLAR_BQUOTE;
	v->a[39802] = anon_sym_LT_LPAREN;
	v->a[39803] = anon_sym_GT_LPAREN;
	v->a[39804] = sym_word;
	v->a[39805] = 13;
	v->a[39806] = actions(3);
	v->a[39807] = 1;
	v->a[39808] = sym_comment;
	v->a[39809] = actions(2719);
	v->a[39810] = 1;
	v->a[39811] = anon_sym_RPAREN;
	v->a[39812] = actions(4384);
	v->a[39813] = 1;
	v->a[39814] = aux_sym_heredoc_redirect_token1;
	v->a[39815] = actions(4811);
	v->a[39816] = 1;
	v->a[39817] = sym_variable_name;
	v->a[39818] = state(6786);
	v->a[39819] = 1;
	small_parse_table_1991(v);
}

void	small_parse_table_1991(t_small_parse_table_array *v)
{
	v->a[39820] = sym_subscript;
	v->a[39821] = actions(4253);
	v->a[39822] = 2;
	v->a[39823] = anon_sym_PIPE;
	v->a[39824] = anon_sym_PIPE_AMP;
	v->a[39825] = actions(4692);
	v->a[39826] = 2;
	v->a[39827] = anon_sym_LT_LT;
	v->a[39828] = anon_sym_LT_LT_DASH;
	v->a[39829] = actions(4809);
	v->a[39830] = 2;
	v->a[39831] = anon_sym_PIPE_PIPE;
	v->a[39832] = anon_sym_AMP_AMP;
	v->a[39833] = state(4534);
	v->a[39834] = 2;
	v->a[39835] = sym_variable_assignment;
	v->a[39836] = aux_sym_variable_assignments_repeat1;
	v->a[39837] = actions(4261);
	v->a[39838] = 3;
	v->a[39839] = sym_file_descriptor;
	small_parse_table_1992(v);
}

void	small_parse_table_1992(t_small_parse_table_array *v)
{
	v->a[39840] = sym_test_operator;
	v->a[39841] = sym__brace_start;
	v->a[39842] = actions(4378);
	v->a[39843] = 3;
	v->a[39844] = anon_sym_SEMI;
	v->a[39845] = anon_sym_AMP;
	v->a[39846] = anon_sym_SEMI_SEMI;
	v->a[39847] = state(4746);
	v->a[39848] = 3;
	v->a[39849] = sym_file_redirect;
	v->a[39850] = sym_heredoc_redirect;
	v->a[39851] = aux_sym_redirected_statement_repeat1;
	v->a[39852] = actions(4247);
	v->a[39853] = 28;
	v->a[39854] = anon_sym_LPAREN_LPAREN;
	v->a[39855] = anon_sym_LT;
	v->a[39856] = anon_sym_GT;
	v->a[39857] = anon_sym_GT_GT;
	v->a[39858] = anon_sym_AMP_GT;
	v->a[39859] = anon_sym_AMP_GT_GT;
	small_parse_table_1993(v);
}

void	small_parse_table_1993(t_small_parse_table_array *v)
{
	v->a[39860] = anon_sym_LT_AMP;
	v->a[39861] = anon_sym_GT_AMP;
	v->a[39862] = anon_sym_GT_PIPE;
	v->a[39863] = anon_sym_LT_AMP_DASH;
	v->a[39864] = anon_sym_GT_AMP_DASH;
	v->a[39865] = anon_sym_LT_LT_LT;
	v->a[39866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39867] = anon_sym_DOLLAR_LBRACK;
	v->a[39868] = anon_sym_DOLLAR;
	v->a[39869] = sym__special_character;
	v->a[39870] = anon_sym_DQUOTE;
	v->a[39871] = sym_raw_string;
	v->a[39872] = sym_ansi_c_string;
	v->a[39873] = aux_sym_number_token1;
	v->a[39874] = aux_sym_number_token2;
	v->a[39875] = anon_sym_DOLLAR_LBRACE;
	v->a[39876] = anon_sym_DOLLAR_LPAREN;
	v->a[39877] = anon_sym_BQUOTE;
	v->a[39878] = anon_sym_DOLLAR_BQUOTE;
	v->a[39879] = anon_sym_LT_LPAREN;
	small_parse_table_1994(v);
}

void	small_parse_table_1994(t_small_parse_table_array *v)
{
	v->a[39880] = anon_sym_GT_LPAREN;
	v->a[39881] = sym_word;
	v->a[39882] = 6;
	v->a[39883] = actions(3);
	v->a[39884] = 1;
	v->a[39885] = sym_comment;
	v->a[39886] = actions(4933);
	v->a[39887] = 1;
	v->a[39888] = aux_sym_concatenation_token1;
	v->a[39889] = actions(4935);
	v->a[39890] = 1;
	v->a[39891] = sym__concat;
	v->a[39892] = state(978);
	v->a[39893] = 1;
	v->a[39894] = aux_sym_concatenation_repeat1;
	v->a[39895] = actions(4548);
	v->a[39896] = 5;
	v->a[39897] = sym_file_descriptor;
	v->a[39898] = sym_test_operator;
	v->a[39899] = sym__bare_dollar;
	small_parse_table_1995(v);
}

/* EOF small_parse_table_398.c */
