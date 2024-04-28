/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1878.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9390(t_small_parse_table_array *v)
{
	v->a[187800] = actions(7755);
	v->a[187801] = 2;
	v->a[187802] = aux_sym__simple_variable_name_token1;
	v->a[187803] = aux_sym__multiline_variable_name_token1;
	v->a[187804] = actions(7753);
	v->a[187805] = 9;
	v->a[187806] = anon_sym_DASH;
	v->a[187807] = anon_sym_STAR;
	v->a[187808] = anon_sym_BANG;
	v->a[187809] = anon_sym_QMARK;
	v->a[187810] = anon_sym_DOLLAR;
	v->a[187811] = anon_sym_POUND;
	v->a[187812] = anon_sym_AT2;
	v->a[187813] = anon_sym_0;
	v->a[187814] = anon_sym__;
	v->a[187815] = actions(1227);
	v->a[187816] = 19;
	v->a[187817] = anon_sym_LPAREN_LPAREN;
	v->a[187818] = anon_sym_SEMI;
	v->a[187819] = anon_sym_AMP;
	small_parse_table_9391(v);
}

void	small_parse_table_9391(t_small_parse_table_array *v)
{
	v->a[187820] = anon_sym_SEMI_SEMI;
	v->a[187821] = aux_sym_heredoc_redirect_token1;
	v->a[187822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[187823] = anon_sym_DOLLAR_LBRACK;
	v->a[187824] = sym__special_character;
	v->a[187825] = sym_raw_string;
	v->a[187826] = sym_ansi_c_string;
	v->a[187827] = aux_sym_number_token1;
	v->a[187828] = aux_sym_number_token2;
	v->a[187829] = anon_sym_DOLLAR_LBRACE;
	v->a[187830] = anon_sym_DOLLAR_LPAREN;
	v->a[187831] = anon_sym_BQUOTE;
	v->a[187832] = anon_sym_DOLLAR_BQUOTE;
	v->a[187833] = anon_sym_LT_LPAREN;
	v->a[187834] = anon_sym_GT_LPAREN;
	v->a[187835] = sym_word;
	v->a[187836] = 21;
	v->a[187837] = actions(3);
	v->a[187838] = 1;
	v->a[187839] = sym_comment;
	small_parse_table_9392(v);
}

void	small_parse_table_9392(t_small_parse_table_array *v)
{
	v->a[187840] = actions(3729);
	v->a[187841] = 1;
	v->a[187842] = anon_sym_DOLLAR_LBRACK;
	v->a[187843] = actions(3731);
	v->a[187844] = 1;
	v->a[187845] = anon_sym_DOLLAR;
	v->a[187846] = actions(3735);
	v->a[187847] = 1;
	v->a[187848] = anon_sym_DQUOTE;
	v->a[187849] = actions(3737);
	v->a[187850] = 1;
	v->a[187851] = aux_sym_number_token1;
	v->a[187852] = actions(3739);
	v->a[187853] = 1;
	v->a[187854] = aux_sym_number_token2;
	v->a[187855] = actions(3741);
	v->a[187856] = 1;
	v->a[187857] = anon_sym_DOLLAR_LBRACE;
	v->a[187858] = actions(3743);
	v->a[187859] = 1;
	small_parse_table_9393(v);
}

void	small_parse_table_9393(t_small_parse_table_array *v)
{
	v->a[187860] = anon_sym_DOLLAR_LPAREN;
	v->a[187861] = actions(3745);
	v->a[187862] = 1;
	v->a[187863] = anon_sym_BQUOTE;
	v->a[187864] = actions(3747);
	v->a[187865] = 1;
	v->a[187866] = anon_sym_DOLLAR_BQUOTE;
	v->a[187867] = actions(3755);
	v->a[187868] = 1;
	v->a[187869] = sym__brace_start;
	v->a[187870] = actions(7765);
	v->a[187871] = 1;
	v->a[187872] = sym__special_character;
	v->a[187873] = actions(7767);
	v->a[187874] = 1;
	v->a[187875] = sym_test_operator;
	v->a[187876] = actions(7837);
	v->a[187877] = 1;
	v->a[187878] = aux_sym_heredoc_redirect_token1;
	v->a[187879] = state(4975);
	small_parse_table_9394(v);
}

void	small_parse_table_9394(t_small_parse_table_array *v)
{
	v->a[187880] = 1;
	v->a[187881] = aux_sym__literal_repeat1;
	v->a[187882] = actions(3715);
	v->a[187883] = 2;
	v->a[187884] = anon_sym_LPAREN_LPAREN;
	v->a[187885] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[187886] = actions(3749);
	v->a[187887] = 2;
	v->a[187888] = anon_sym_LT_LPAREN;
	v->a[187889] = anon_sym_GT_LPAREN;
	v->a[187890] = state(3478);
	v->a[187891] = 2;
	v->a[187892] = sym_concatenation;
	v->a[187893] = aux_sym_for_statement_repeat1;
	v->a[187894] = actions(7759);
	v->a[187895] = 3;
	v->a[187896] = sym_raw_string;
	v->a[187897] = sym_ansi_c_string;
	v->a[187898] = sym_word;
	v->a[187899] = actions(7835);
	small_parse_table_9395(v);
}

/* EOF small_parse_table_1878.c */
