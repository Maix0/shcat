/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_469.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2345(t_small_parse_table_array *v)
{
	v->a[46900] = actions(842);
	v->a[46901] = 2;
	v->a[46902] = anon_sym_esac;
	v->a[46903] = anon_sym_SEMI_SEMI;
	v->a[46904] = state(931);
	v->a[46905] = 3;
	v->a[46906] = sym_file_redirect;
	v->a[46907] = sym_heredoc_redirect;
	v->a[46908] = aux_sym_redirected_statement_repeat1;
	v->a[46909] = actions(1593);
	v->a[46910] = 7;
	v->a[46911] = anon_sym_LT;
	v->a[46912] = anon_sym_GT;
	v->a[46913] = anon_sym_GT_GT;
	v->a[46914] = anon_sym_LT_AMP;
	v->a[46915] = anon_sym_GT_AMP;
	v->a[46916] = anon_sym_GT_PIPE;
	v->a[46917] = anon_sym_LT_GT;
	v->a[46918] = 6;
	v->a[46919] = actions(3);
	small_parse_table_2346(v);
}

void	small_parse_table_2346(t_small_parse_table_array *v)
{
	v->a[46920] = 1;
	v->a[46921] = sym_comment;
	v->a[46922] = actions(1599);
	v->a[46923] = 1;
	v->a[46924] = aux_sym_concatenation_token1;
	v->a[46925] = actions(1672);
	v->a[46926] = 1;
	v->a[46927] = sym__concat;
	v->a[46928] = state(722);
	v->a[46929] = 1;
	v->a[46930] = aux_sym_concatenation_repeat1;
	v->a[46931] = actions(1001);
	v->a[46932] = 2;
	v->a[46933] = sym_variable_name;
	v->a[46934] = aux_sym_heredoc_redirect_token1;
	v->a[46935] = actions(997);
	v->a[46936] = 15;
	v->a[46937] = anon_sym_PIPE;
	v->a[46938] = anon_sym_SEMI_SEMI;
	v->a[46939] = anon_sym_AMP_AMP;
	small_parse_table_2347(v);
}

void	small_parse_table_2347(t_small_parse_table_array *v)
{
	v->a[46940] = anon_sym_PIPE_PIPE;
	v->a[46941] = anon_sym_LT;
	v->a[46942] = anon_sym_GT;
	v->a[46943] = anon_sym_GT_GT;
	v->a[46944] = anon_sym_LT_AMP;
	v->a[46945] = anon_sym_GT_AMP;
	v->a[46946] = anon_sym_GT_PIPE;
	v->a[46947] = anon_sym_LT_GT;
	v->a[46948] = anon_sym_LT_LT;
	v->a[46949] = anon_sym_LT_LT_DASH;
	v->a[46950] = anon_sym_BQUOTE;
	v->a[46951] = anon_sym_SEMI;
	v->a[46952] = 10;
	v->a[46953] = actions(3);
	v->a[46954] = 1;
	v->a[46955] = sym_comment;
	v->a[46956] = actions(746);
	v->a[46957] = 1;
	v->a[46958] = anon_sym_PIPE;
	v->a[46959] = actions(842);
	small_parse_table_2348(v);
}

void	small_parse_table_2348(t_small_parse_table_array *v)
{
	v->a[46960] = 1;
	v->a[46961] = anon_sym_RPAREN;
	v->a[46962] = actions(1591);
	v->a[46963] = 1;
	v->a[46964] = aux_sym_heredoc_redirect_token1;
	v->a[46965] = state(518);
	v->a[46966] = 1;
	v->a[46967] = sym_terminator;
	v->a[46968] = actions(850);
	v->a[46969] = 2;
	v->a[46970] = anon_sym_LT_LT;
	v->a[46971] = anon_sym_LT_LT_DASH;
	v->a[46972] = actions(858);
	v->a[46973] = 2;
	v->a[46974] = anon_sym_SEMI_SEMI;
	v->a[46975] = anon_sym_SEMI;
	v->a[46976] = actions(860);
	v->a[46977] = 2;
	v->a[46978] = anon_sym_AMP_AMP;
	v->a[46979] = anon_sym_PIPE_PIPE;
	small_parse_table_2349(v);
}

void	small_parse_table_2349(t_small_parse_table_array *v)
{
	v->a[46980] = state(918);
	v->a[46981] = 3;
	v->a[46982] = sym_file_redirect;
	v->a[46983] = sym_heredoc_redirect;
	v->a[46984] = aux_sym_redirected_statement_repeat1;
	v->a[46985] = actions(1597);
	v->a[46986] = 7;
	v->a[46987] = anon_sym_LT;
	v->a[46988] = anon_sym_GT;
	v->a[46989] = anon_sym_GT_GT;
	v->a[46990] = anon_sym_LT_AMP;
	v->a[46991] = anon_sym_GT_AMP;
	v->a[46992] = anon_sym_GT_PIPE;
	v->a[46993] = anon_sym_LT_GT;
	v->a[46994] = 10;
	v->a[46995] = actions(3);
	v->a[46996] = 1;
	v->a[46997] = sym_comment;
	v->a[46998] = actions(746);
	v->a[46999] = 1;
	small_parse_table_2350(v);
}

/* EOF small_parse_table_469.c */
