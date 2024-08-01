/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_290.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1450(t_small_parse_table_array *v)
{
	v->a[29000] = 1;
	v->a[29001] = sym__case_item_last;
	v->a[29002] = state(1538);
	v->a[29003] = 2;
	v->a[29004] = sym_concatenation;
	v->a[29005] = sym__extglob_blob;
	v->a[29006] = actions(774);
	v->a[29007] = 3;
	v->a[29008] = sym_raw_string;
	v->a[29009] = sym_number;
	v->a[29010] = sym_word;
	v->a[29011] = state(1468);
	v->a[29012] = 5;
	v->a[29013] = sym_arithmetic_expansion;
	v->a[29014] = sym_string;
	v->a[29015] = sym_simple_expansion;
	v->a[29016] = sym_expansion;
	v->a[29017] = sym_command_substitution;
	v->a[29018] = 3;
	v->a[29019] = actions(3);
	small_parse_table_1451(v);
}

void	small_parse_table_1451(t_small_parse_table_array *v)
{
	v->a[29020] = 1;
	v->a[29021] = sym_comment;
	v->a[29022] = actions(1003);
	v->a[29023] = 1;
	v->a[29024] = sym_variable_name;
	v->a[29025] = actions(1001);
	v->a[29026] = 21;
	v->a[29027] = anon_sym_for;
	v->a[29028] = anon_sym_while;
	v->a[29029] = anon_sym_until;
	v->a[29030] = anon_sym_if;
	v->a[29031] = anon_sym_fi;
	v->a[29032] = anon_sym_case;
	v->a[29033] = anon_sym_LPAREN;
	v->a[29034] = anon_sym_LBRACE;
	v->a[29035] = anon_sym_BANG;
	v->a[29036] = anon_sym_LT;
	v->a[29037] = anon_sym_GT;
	v->a[29038] = anon_sym_GT_GT;
	v->a[29039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1452(v);
}

void	small_parse_table_1452(t_small_parse_table_array *v)
{
	v->a[29040] = anon_sym_DOLLAR;
	v->a[29041] = anon_sym_DQUOTE;
	v->a[29042] = sym_raw_string;
	v->a[29043] = sym_number;
	v->a[29044] = anon_sym_DOLLAR_LBRACE;
	v->a[29045] = anon_sym_DOLLAR_LPAREN;
	v->a[29046] = anon_sym_BQUOTE;
	v->a[29047] = sym_word;
	v->a[29048] = 3;
	v->a[29049] = actions(3);
	v->a[29050] = 1;
	v->a[29051] = sym_comment;
	v->a[29052] = actions(1050);
	v->a[29053] = 2;
	v->a[29054] = sym__concat;
	v->a[29055] = ts_builtin_sym_end;
	v->a[29056] = actions(1052);
	v->a[29057] = 20;
	v->a[29058] = anon_sym_PIPE;
	v->a[29059] = anon_sym_SEMI_SEMI;
	small_parse_table_1453(v);
}

void	small_parse_table_1453(t_small_parse_table_array *v)
{
	v->a[29060] = anon_sym_AMP_AMP;
	v->a[29061] = anon_sym_PIPE_PIPE;
	v->a[29062] = anon_sym_LT;
	v->a[29063] = anon_sym_GT;
	v->a[29064] = anon_sym_GT_GT;
	v->a[29065] = anon_sym_LT_LT;
	v->a[29066] = aux_sym_heredoc_redirect_token1;
	v->a[29067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29068] = aux_sym_concatenation_token1;
	v->a[29069] = anon_sym_DOLLAR;
	v->a[29070] = anon_sym_DQUOTE;
	v->a[29071] = sym_raw_string;
	v->a[29072] = sym_number;
	v->a[29073] = anon_sym_DOLLAR_LBRACE;
	v->a[29074] = anon_sym_DOLLAR_LPAREN;
	v->a[29075] = anon_sym_BQUOTE;
	v->a[29076] = sym_word;
	v->a[29077] = anon_sym_SEMI;
	v->a[29078] = 3;
	v->a[29079] = actions(3);
	small_parse_table_1454(v);
}

void	small_parse_table_1454(t_small_parse_table_array *v)
{
	v->a[29080] = 1;
	v->a[29081] = sym_comment;
	v->a[29082] = actions(1116);
	v->a[29083] = 2;
	v->a[29084] = sym__concat;
	v->a[29085] = ts_builtin_sym_end;
	v->a[29086] = actions(1114);
	v->a[29087] = 20;
	v->a[29088] = anon_sym_PIPE;
	v->a[29089] = anon_sym_SEMI_SEMI;
	v->a[29090] = anon_sym_AMP_AMP;
	v->a[29091] = anon_sym_PIPE_PIPE;
	v->a[29092] = anon_sym_LT;
	v->a[29093] = anon_sym_GT;
	v->a[29094] = anon_sym_GT_GT;
	v->a[29095] = anon_sym_LT_LT;
	v->a[29096] = aux_sym_heredoc_redirect_token1;
	v->a[29097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29098] = aux_sym_concatenation_token1;
	v->a[29099] = anon_sym_DOLLAR;
	small_parse_table_1455(v);
}

/* EOF small_parse_table_290.c */
