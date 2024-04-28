/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_910.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4550(t_small_parse_table_array *v)
{
	v->a[91000] = anon_sym_LT_LT;
	v->a[91001] = anon_sym_GT_GT;
	v->a[91002] = anon_sym_RPAREN;
	v->a[91003] = anon_sym_SEMI_SEMI;
	v->a[91004] = anon_sym_PIPE_AMP;
	v->a[91005] = anon_sym_AMP_GT;
	v->a[91006] = anon_sym_AMP_GT_GT;
	v->a[91007] = anon_sym_LT_AMP;
	v->a[91008] = anon_sym_GT_AMP;
	v->a[91009] = anon_sym_GT_PIPE;
	v->a[91010] = anon_sym_LT_AMP_DASH;
	v->a[91011] = anon_sym_GT_AMP_DASH;
	v->a[91012] = anon_sym_LT_LT_DASH;
	v->a[91013] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91014] = anon_sym_DOLLAR_LBRACK;
	v->a[91015] = anon_sym_DOLLAR;
	v->a[91016] = sym__special_character;
	v->a[91017] = anon_sym_DQUOTE;
	v->a[91018] = sym_raw_string;
	v->a[91019] = sym_ansi_c_string;
	small_parse_table_4551(v);
}

void	small_parse_table_4551(t_small_parse_table_array *v)
{
	v->a[91020] = aux_sym_number_token1;
	v->a[91021] = aux_sym_number_token2;
	v->a[91022] = anon_sym_DOLLAR_LBRACE;
	v->a[91023] = anon_sym_DOLLAR_LPAREN;
	v->a[91024] = anon_sym_BQUOTE;
	v->a[91025] = anon_sym_DOLLAR_BQUOTE;
	v->a[91026] = anon_sym_LT_LPAREN;
	v->a[91027] = anon_sym_GT_LPAREN;
	v->a[91028] = sym_word;
	v->a[91029] = 3;
	v->a[91030] = actions(3);
	v->a[91031] = 1;
	v->a[91032] = sym_comment;
	v->a[91033] = actions(1346);
	v->a[91034] = 6;
	v->a[91035] = sym_file_descriptor;
	v->a[91036] = sym__concat;
	v->a[91037] = sym_test_operator;
	v->a[91038] = sym__brace_start;
	v->a[91039] = ts_builtin_sym_end;
	small_parse_table_4552(v);
}

void	small_parse_table_4552(t_small_parse_table_array *v)
{
	v->a[91040] = aux_sym_heredoc_redirect_token1;
	v->a[91041] = actions(1344);
	v->a[91042] = 38;
	v->a[91043] = anon_sym_LPAREN_LPAREN;
	v->a[91044] = anon_sym_SEMI;
	v->a[91045] = anon_sym_PIPE_PIPE;
	v->a[91046] = anon_sym_AMP_AMP;
	v->a[91047] = anon_sym_PIPE;
	v->a[91048] = anon_sym_AMP;
	v->a[91049] = anon_sym_LT;
	v->a[91050] = anon_sym_GT;
	v->a[91051] = anon_sym_LT_LT;
	v->a[91052] = anon_sym_GT_GT;
	v->a[91053] = anon_sym_SEMI_SEMI;
	v->a[91054] = anon_sym_PIPE_AMP;
	v->a[91055] = anon_sym_AMP_GT;
	v->a[91056] = anon_sym_AMP_GT_GT;
	v->a[91057] = anon_sym_LT_AMP;
	v->a[91058] = anon_sym_GT_AMP;
	v->a[91059] = anon_sym_GT_PIPE;
	small_parse_table_4553(v);
}

void	small_parse_table_4553(t_small_parse_table_array *v)
{
	v->a[91060] = anon_sym_LT_AMP_DASH;
	v->a[91061] = anon_sym_GT_AMP_DASH;
	v->a[91062] = anon_sym_LT_LT_DASH;
	v->a[91063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91064] = anon_sym_DOLLAR_LBRACK;
	v->a[91065] = aux_sym_concatenation_token1;
	v->a[91066] = anon_sym_DOLLAR;
	v->a[91067] = sym__special_character;
	v->a[91068] = anon_sym_DQUOTE;
	v->a[91069] = sym_raw_string;
	v->a[91070] = sym_ansi_c_string;
	v->a[91071] = aux_sym_number_token1;
	v->a[91072] = aux_sym_number_token2;
	v->a[91073] = anon_sym_DOLLAR_LBRACE;
	v->a[91074] = anon_sym_DOLLAR_LPAREN;
	v->a[91075] = anon_sym_BQUOTE;
	v->a[91076] = anon_sym_DOLLAR_BQUOTE;
	v->a[91077] = anon_sym_LT_LPAREN;
	v->a[91078] = anon_sym_GT_LPAREN;
	v->a[91079] = aux_sym__simple_variable_name_token1;
	small_parse_table_4554(v);
}

void	small_parse_table_4554(t_small_parse_table_array *v)
{
	v->a[91080] = sym_word;
	v->a[91081] = 3;
	v->a[91082] = actions(3);
	v->a[91083] = 1;
	v->a[91084] = sym_comment;
	v->a[91085] = actions(1358);
	v->a[91086] = 6;
	v->a[91087] = sym_file_descriptor;
	v->a[91088] = sym__concat;
	v->a[91089] = sym_test_operator;
	v->a[91090] = sym__brace_start;
	v->a[91091] = ts_builtin_sym_end;
	v->a[91092] = aux_sym_heredoc_redirect_token1;
	v->a[91093] = actions(1356);
	v->a[91094] = 38;
	v->a[91095] = anon_sym_LPAREN_LPAREN;
	v->a[91096] = anon_sym_SEMI;
	v->a[91097] = anon_sym_PIPE_PIPE;
	v->a[91098] = anon_sym_AMP_AMP;
	v->a[91099] = anon_sym_PIPE;
	small_parse_table_4555(v);
}

/* EOF small_parse_table_910.c */
