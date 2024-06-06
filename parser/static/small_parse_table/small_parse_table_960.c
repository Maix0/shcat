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
	v->a[96000] = anon_sym_SEMI_SEMI_AMP;
	v->a[96001] = anon_sym_PIPE_AMP;
	v->a[96002] = anon_sym_AMP_AMP;
	v->a[96003] = anon_sym_PIPE_PIPE;
	v->a[96004] = anon_sym_AMP;
	v->a[96005] = anon_sym_SEMI;
	v->a[96006] = 3;
	v->a[96007] = actions(3);
	v->a[96008] = 1;
	v->a[96009] = sym_comment;
	v->a[96010] = actions(2908);
	v->a[96011] = 4;
	v->a[96012] = sym_file_descriptor;
	v->a[96013] = sym__concat;
	v->a[96014] = ts_builtin_sym_end;
	v->a[96015] = aux_sym_heredoc_redirect_token1;
	v->a[96016] = actions(2906);
	v->a[96017] = 22;
	v->a[96018] = anon_sym_PIPE;
	v->a[96019] = anon_sym_RPAREN;
	small_parse_table_4801(v);
}

void	small_parse_table_4801(t_small_parse_table_array *v)
{
	v->a[96020] = anon_sym_SEMI_SEMI;
	v->a[96021] = anon_sym_PIPE_AMP;
	v->a[96022] = anon_sym_AMP_AMP;
	v->a[96023] = anon_sym_PIPE_PIPE;
	v->a[96024] = anon_sym_LT;
	v->a[96025] = anon_sym_GT;
	v->a[96026] = anon_sym_GT_GT;
	v->a[96027] = anon_sym_AMP_GT;
	v->a[96028] = anon_sym_AMP_GT_GT;
	v->a[96029] = anon_sym_LT_AMP;
	v->a[96030] = anon_sym_GT_AMP;
	v->a[96031] = anon_sym_GT_PIPE;
	v->a[96032] = anon_sym_LT_AMP_DASH;
	v->a[96033] = anon_sym_GT_AMP_DASH;
	v->a[96034] = anon_sym_LT_LT;
	v->a[96035] = anon_sym_LT_LT_DASH;
	v->a[96036] = anon_sym_AMP;
	v->a[96037] = aux_sym_concatenation_token1;
	v->a[96038] = anon_sym_BQUOTE;
	v->a[96039] = anon_sym_SEMI;
	small_parse_table_4802(v);
}

void	small_parse_table_4802(t_small_parse_table_array *v)
{
	v->a[96040] = 5;
	v->a[96041] = actions(3);
	v->a[96042] = 1;
	v->a[96043] = sym_comment;
	v->a[96044] = actions(5264);
	v->a[96045] = 1;
	v->a[96046] = sym__special_character;
	v->a[96047] = state(1985);
	v->a[96048] = 1;
	v->a[96049] = aux_sym__literal_repeat1;
	v->a[96050] = actions(3197);
	v->a[96051] = 2;
	v->a[96052] = sym_file_descriptor;
	v->a[96053] = aux_sym_heredoc_redirect_token1;
	v->a[96054] = actions(3195);
	v->a[96055] = 22;
	v->a[96056] = anon_sym_esac;
	v->a[96057] = anon_sym_PIPE;
	v->a[96058] = anon_sym_SEMI_SEMI;
	v->a[96059] = anon_sym_SEMI_AMP;
	small_parse_table_4803(v);
}

void	small_parse_table_4803(t_small_parse_table_array *v)
{
	v->a[96060] = anon_sym_SEMI_SEMI_AMP;
	v->a[96061] = anon_sym_PIPE_AMP;
	v->a[96062] = anon_sym_AMP_AMP;
	v->a[96063] = anon_sym_PIPE_PIPE;
	v->a[96064] = anon_sym_LT;
	v->a[96065] = anon_sym_GT;
	v->a[96066] = anon_sym_GT_GT;
	v->a[96067] = anon_sym_AMP_GT;
	v->a[96068] = anon_sym_AMP_GT_GT;
	v->a[96069] = anon_sym_LT_AMP;
	v->a[96070] = anon_sym_GT_AMP;
	v->a[96071] = anon_sym_GT_PIPE;
	v->a[96072] = anon_sym_LT_AMP_DASH;
	v->a[96073] = anon_sym_GT_AMP_DASH;
	v->a[96074] = anon_sym_LT_LT;
	v->a[96075] = anon_sym_LT_LT_DASH;
	v->a[96076] = anon_sym_AMP;
	v->a[96077] = anon_sym_SEMI;
	v->a[96078] = 3;
	v->a[96079] = actions(3);
	small_parse_table_4804(v);
}

void	small_parse_table_4804(t_small_parse_table_array *v)
{
	v->a[96080] = 1;
	v->a[96081] = sym_comment;
	v->a[96082] = actions(2654);
	v->a[96083] = 3;
	v->a[96084] = sym_file_descriptor;
	v->a[96085] = sym__concat;
	v->a[96086] = aux_sym_heredoc_redirect_token1;
	v->a[96087] = actions(2652);
	v->a[96088] = 23;
	v->a[96089] = anon_sym_esac;
	v->a[96090] = anon_sym_PIPE;
	v->a[96091] = anon_sym_SEMI_SEMI;
	v->a[96092] = anon_sym_SEMI_AMP;
	v->a[96093] = anon_sym_SEMI_SEMI_AMP;
	v->a[96094] = anon_sym_PIPE_AMP;
	v->a[96095] = anon_sym_AMP_AMP;
	v->a[96096] = anon_sym_PIPE_PIPE;
	v->a[96097] = anon_sym_LT;
	v->a[96098] = anon_sym_GT;
	v->a[96099] = anon_sym_GT_GT;
	small_parse_table_4805(v);
}

/* EOF small_parse_table_960.c */
