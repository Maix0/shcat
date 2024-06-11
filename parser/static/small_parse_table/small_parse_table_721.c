/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_721.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3605(t_small_parse_table_array *v)
{
	v->a[72100] = anon_sym_AMP_GT_GT;
	v->a[72101] = anon_sym_LT_AMP;
	v->a[72102] = anon_sym_GT_AMP;
	v->a[72103] = anon_sym_GT_PIPE;
	v->a[72104] = 13;
	v->a[72105] = actions(3);
	v->a[72106] = 1;
	v->a[72107] = sym_comment;
	v->a[72108] = actions(807);
	v->a[72109] = 1;
	v->a[72110] = anon_sym_PIPE;
	v->a[72111] = actions(951);
	v->a[72112] = 1;
	v->a[72113] = ts_builtin_sym_end;
	v->a[72114] = actions(2075);
	v->a[72115] = 1;
	v->a[72116] = sym_file_descriptor;
	v->a[72117] = actions(2551);
	v->a[72118] = 1;
	v->a[72119] = anon_sym_SEMI_SEMI;
	small_parse_table_3606(v);
}

void	small_parse_table_3606(t_small_parse_table_array *v)
{
	v->a[72120] = actions(2553);
	v->a[72121] = 1;
	v->a[72122] = aux_sym_heredoc_redirect_token1;
	v->a[72123] = actions(2555);
	v->a[72124] = 1;
	v->a[72125] = anon_sym_AMP;
	v->a[72126] = actions(2557);
	v->a[72127] = 1;
	v->a[72128] = anon_sym_SEMI;
	v->a[72129] = actions(861);
	v->a[72130] = 2;
	v->a[72131] = anon_sym_LT_LT;
	v->a[72132] = anon_sym_LT_LT_DASH;
	v->a[72133] = actions(934);
	v->a[72134] = 2;
	v->a[72135] = anon_sym_AMP_AMP;
	v->a[72136] = anon_sym_PIPE_PIPE;
	v->a[72137] = actions(2067);
	v->a[72138] = 2;
	v->a[72139] = anon_sym_LT_AMP_DASH;
	small_parse_table_3607(v);
}

void	small_parse_table_3607(t_small_parse_table_array *v)
{
	v->a[72140] = anon_sym_GT_AMP_DASH;
	v->a[72141] = state(1289);
	v->a[72142] = 3;
	v->a[72143] = sym_file_redirect;
	v->a[72144] = sym_heredoc_redirect;
	v->a[72145] = aux_sym_redirected_statement_repeat1;
	v->a[72146] = actions(2065);
	v->a[72147] = 8;
	v->a[72148] = anon_sym_LT;
	v->a[72149] = anon_sym_GT;
	v->a[72150] = anon_sym_GT_GT;
	v->a[72151] = anon_sym_AMP_GT;
	v->a[72152] = anon_sym_AMP_GT_GT;
	v->a[72153] = anon_sym_LT_AMP;
	v->a[72154] = anon_sym_GT_AMP;
	v->a[72155] = anon_sym_GT_PIPE;
	v->a[72156] = 5;
	v->a[72157] = actions(3);
	v->a[72158] = 1;
	v->a[72159] = sym_comment;
	small_parse_table_3608(v);
}

void	small_parse_table_3608(t_small_parse_table_array *v)
{
	v->a[72160] = actions(2559);
	v->a[72161] = 1;
	v->a[72162] = sym_variable_name;
	v->a[72163] = state(1204);
	v->a[72164] = 2;
	v->a[72165] = sym_variable_assignment;
	v->a[72166] = aux_sym_variable_assignments_repeat1;
	v->a[72167] = actions(2124);
	v->a[72168] = 3;
	v->a[72169] = sym_file_descriptor;
	v->a[72170] = ts_builtin_sym_end;
	v->a[72171] = aux_sym_heredoc_redirect_token1;
	v->a[72172] = actions(2122);
	v->a[72173] = 18;
	v->a[72174] = anon_sym_PIPE;
	v->a[72175] = anon_sym_SEMI_SEMI;
	v->a[72176] = anon_sym_AMP_AMP;
	v->a[72177] = anon_sym_PIPE_PIPE;
	v->a[72178] = anon_sym_LT;
	v->a[72179] = anon_sym_GT;
	small_parse_table_3609(v);
}

void	small_parse_table_3609(t_small_parse_table_array *v)
{
	v->a[72180] = anon_sym_GT_GT;
	v->a[72181] = anon_sym_AMP_GT;
	v->a[72182] = anon_sym_AMP_GT_GT;
	v->a[72183] = anon_sym_LT_AMP;
	v->a[72184] = anon_sym_GT_AMP;
	v->a[72185] = anon_sym_GT_PIPE;
	v->a[72186] = anon_sym_LT_AMP_DASH;
	v->a[72187] = anon_sym_GT_AMP_DASH;
	v->a[72188] = anon_sym_LT_LT;
	v->a[72189] = anon_sym_LT_LT_DASH;
	v->a[72190] = anon_sym_AMP;
	v->a[72191] = anon_sym_SEMI;
	v->a[72192] = 6;
	v->a[72193] = actions(3);
	v->a[72194] = 1;
	v->a[72195] = sym_comment;
	v->a[72196] = actions(2041);
	v->a[72197] = 1;
	v->a[72198] = aux_sym_concatenation_token1;
	v->a[72199] = actions(2061);
	small_parse_table_3610(v);
}

/* EOF small_parse_table_721.c */
