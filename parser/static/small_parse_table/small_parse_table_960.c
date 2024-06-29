/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_960.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4800(t_small_parse_table_array *v)
{
	v->a[96000] = actions(3);
	v->a[96001] = 1;
	v->a[96002] = sym_comment;
	v->a[96003] = actions(4366);
	v->a[96004] = 1;
	v->a[96005] = aux_sym_heredoc_redirect_token1;
	v->a[96006] = 2;
	v->a[96007] = actions(3);
	v->a[96008] = 1;
	v->a[96009] = sym_comment;
	v->a[96010] = actions(4368);
	v->a[96011] = 1;
	v->a[96012] = aux_sym_heredoc_redirect_token1;
	v->a[96013] = 2;
	v->a[96014] = actions(1074);
	v->a[96015] = 1;
	v->a[96016] = sym_comment;
	v->a[96017] = actions(4370);
	v->a[96018] = 1;
	v->a[96019] = anon_sym_RPAREN;
	small_parse_table_4801(v);
}

void	small_parse_table_4801(t_small_parse_table_array *v)
{
	v->a[96020] = 2;
	v->a[96021] = actions(1074);
	v->a[96022] = 1;
	v->a[96023] = sym_comment;
	v->a[96024] = actions(4372);
	v->a[96025] = 1;
	v->a[96026] = anon_sym_RPAREN;
	v->a[96027] = 2;
	v->a[96028] = actions(1074);
	v->a[96029] = 1;
	v->a[96030] = sym_comment;
	v->a[96031] = actions(4374);
	v->a[96032] = 1;
	v->a[96033] = anon_sym_BQUOTE;
	v->a[96034] = 2;
	v->a[96035] = actions(1074);
	v->a[96036] = 1;
	v->a[96037] = sym_comment;
	v->a[96038] = actions(4376);
	v->a[96039] = 1;
	small_parse_table_4802(v);
}

void	small_parse_table_4802(t_small_parse_table_array *v)
{
	v->a[96040] = anon_sym_RBRACE;
	v->a[96041] = 2;
	v->a[96042] = actions(1074);
	v->a[96043] = 1;
	v->a[96044] = sym_comment;
	v->a[96045] = actions(4378);
	v->a[96046] = 1;
	v->a[96047] = anon_sym_EQ;
	v->a[96048] = 2;
	v->a[96049] = actions(1074);
	v->a[96050] = 1;
	v->a[96051] = sym_comment;
	v->a[96052] = actions(4380);
	v->a[96053] = 1;
	v->a[96054] = anon_sym_EQ;
	v->a[96055] = 2;
	v->a[96056] = actions(1074);
	v->a[96057] = 1;
	v->a[96058] = sym_comment;
	v->a[96059] = actions(4382);
	small_parse_table_4803(v);
}

void	small_parse_table_4803(t_small_parse_table_array *v)
{
	v->a[96060] = 1;
	v->a[96061] = aux_sym__simple_variable_name_token1;
	v->a[96062] = 2;
	v->a[96063] = actions(1074);
	v->a[96064] = 1;
	v->a[96065] = sym_comment;
	v->a[96066] = actions(4384);
	v->a[96067] = 1;
	v->a[96068] = anon_sym_RPAREN;
	v->a[96069] = 2;
	v->a[96070] = actions(1074);
	v->a[96071] = 1;
	v->a[96072] = sym_comment;
	v->a[96073] = actions(4386);
	v->a[96074] = 1;
	v->a[96075] = anon_sym_esac;
	v->a[96076] = 2;
	v->a[96077] = actions(1074);
	v->a[96078] = 1;
	v->a[96079] = sym_comment;
	small_parse_table_4804(v);
}

void	small_parse_table_4804(t_small_parse_table_array *v)
{
	v->a[96080] = actions(4388);
	v->a[96081] = 1;
	v->a[96082] = sym_heredoc_start;
	v->a[96083] = 2;
	v->a[96084] = actions(1074);
	v->a[96085] = 1;
	v->a[96086] = sym_comment;
	v->a[96087] = actions(4390);
	v->a[96088] = 1;
	v->a[96089] = anon_sym_RBRACE;
	v->a[96090] = 2;
	v->a[96091] = actions(1074);
	v->a[96092] = 1;
	v->a[96093] = sym_comment;
	v->a[96094] = actions(4392);
	v->a[96095] = 1;
	v->a[96096] = sym_heredoc_start;
	v->a[96097] = 2;
	v->a[96098] = actions(1074);
	v->a[96099] = 1;
	small_parse_table_4805(v);
}

/* EOF small_parse_table_960.c */
