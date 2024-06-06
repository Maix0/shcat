/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_950.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4750(t_small_parse_table_array *v)
{
	v->a[95000] = 3;
	v->a[95001] = actions(57);
	v->a[95002] = 1;
	v->a[95003] = sym_comment;
	v->a[95004] = actions(2662);
	v->a[95005] = 10;
	v->a[95006] = anon_sym_LT;
	v->a[95007] = anon_sym_GT;
	v->a[95008] = anon_sym_AMP_GT;
	v->a[95009] = anon_sym_LT_AMP;
	v->a[95010] = anon_sym_GT_AMP;
	v->a[95011] = anon_sym_DOLLAR;
	v->a[95012] = aux_sym_number_token1;
	v->a[95013] = aux_sym_number_token2;
	v->a[95014] = anon_sym_DOLLAR_LPAREN;
	v->a[95015] = sym_word;
	v->a[95016] = actions(2664);
	v->a[95017] = 16;
	v->a[95018] = sym_file_descriptor;
	v->a[95019] = sym_variable_name;
	small_parse_table_4751(v);
}

void	small_parse_table_4751(t_small_parse_table_array *v)
{
	v->a[95020] = sym_test_operator;
	v->a[95021] = sym__brace_start;
	v->a[95022] = anon_sym_GT_GT;
	v->a[95023] = anon_sym_AMP_GT_GT;
	v->a[95024] = anon_sym_GT_PIPE;
	v->a[95025] = anon_sym_LT_AMP_DASH;
	v->a[95026] = anon_sym_GT_AMP_DASH;
	v->a[95027] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95028] = sym__special_character;
	v->a[95029] = anon_sym_DQUOTE;
	v->a[95030] = sym_raw_string;
	v->a[95031] = anon_sym_DOLLAR_LBRACE;
	v->a[95032] = anon_sym_BQUOTE;
	v->a[95033] = anon_sym_DOLLAR_BQUOTE;
	v->a[95034] = 3;
	v->a[95035] = actions(3);
	v->a[95036] = 1;
	v->a[95037] = sym_comment;
	v->a[95038] = actions(2908);
	v->a[95039] = 4;
	small_parse_table_4752(v);
}

void	small_parse_table_4752(t_small_parse_table_array *v)
{
	v->a[95040] = sym_file_descriptor;
	v->a[95041] = sym__concat;
	v->a[95042] = sym_variable_name;
	v->a[95043] = aux_sym_heredoc_redirect_token1;
	v->a[95044] = actions(2906);
	v->a[95045] = 22;
	v->a[95046] = anon_sym_PIPE;
	v->a[95047] = anon_sym_SEMI_SEMI;
	v->a[95048] = anon_sym_SEMI_AMP;
	v->a[95049] = anon_sym_SEMI_SEMI_AMP;
	v->a[95050] = anon_sym_PIPE_AMP;
	v->a[95051] = anon_sym_AMP_AMP;
	v->a[95052] = anon_sym_PIPE_PIPE;
	v->a[95053] = anon_sym_LT;
	v->a[95054] = anon_sym_GT;
	v->a[95055] = anon_sym_GT_GT;
	v->a[95056] = anon_sym_AMP_GT;
	v->a[95057] = anon_sym_AMP_GT_GT;
	v->a[95058] = anon_sym_LT_AMP;
	v->a[95059] = anon_sym_GT_AMP;
	small_parse_table_4753(v);
}

void	small_parse_table_4753(t_small_parse_table_array *v)
{
	v->a[95060] = anon_sym_GT_PIPE;
	v->a[95061] = anon_sym_LT_AMP_DASH;
	v->a[95062] = anon_sym_GT_AMP_DASH;
	v->a[95063] = anon_sym_LT_LT;
	v->a[95064] = anon_sym_LT_LT_DASH;
	v->a[95065] = anon_sym_AMP;
	v->a[95066] = aux_sym_concatenation_token1;
	v->a[95067] = anon_sym_SEMI;
	v->a[95068] = 6;
	v->a[95069] = actions(3);
	v->a[95070] = 1;
	v->a[95071] = sym_comment;
	v->a[95072] = actions(5161);
	v->a[95073] = 1;
	v->a[95074] = aux_sym_concatenation_token1;
	v->a[95075] = actions(5233);
	v->a[95076] = 1;
	v->a[95077] = sym__concat;
	v->a[95078] = state(1853);
	v->a[95079] = 1;
	small_parse_table_4754(v);
}

void	small_parse_table_4754(t_small_parse_table_array *v)
{
	v->a[95080] = aux_sym_concatenation_repeat1;
	v->a[95081] = actions(2696);
	v->a[95082] = 3;
	v->a[95083] = sym_file_descriptor;
	v->a[95084] = sym_variable_name;
	v->a[95085] = aux_sym_heredoc_redirect_token1;
	v->a[95086] = actions(2694);
	v->a[95087] = 20;
	v->a[95088] = anon_sym_PIPE;
	v->a[95089] = anon_sym_SEMI_SEMI;
	v->a[95090] = anon_sym_PIPE_AMP;
	v->a[95091] = anon_sym_AMP_AMP;
	v->a[95092] = anon_sym_PIPE_PIPE;
	v->a[95093] = anon_sym_LT;
	v->a[95094] = anon_sym_GT;
	v->a[95095] = anon_sym_GT_GT;
	v->a[95096] = anon_sym_AMP_GT;
	v->a[95097] = anon_sym_AMP_GT_GT;
	v->a[95098] = anon_sym_LT_AMP;
	v->a[95099] = anon_sym_GT_AMP;
	small_parse_table_4755(v);
}

/* EOF small_parse_table_950.c */
