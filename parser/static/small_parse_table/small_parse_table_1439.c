/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1439.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7195(t_small_parse_table_array *v)
{
	v->a[143900] = sym_expansion;
	v->a[143901] = sym_command_substitution;
	v->a[143902] = 6;
	v->a[143903] = actions(57);
	v->a[143904] = 1;
	v->a[143905] = sym_comment;
	v->a[143906] = actions(5736);
	v->a[143907] = 1;
	v->a[143908] = anon_sym_DOLLAR_LBRACE;
	v->a[143909] = actions(5740);
	v->a[143910] = 1;
	v->a[143911] = anon_sym_BQUOTE;
	v->a[143912] = actions(5742);
	v->a[143913] = 1;
	v->a[143914] = anon_sym_DOLLAR_BQUOTE;
	v->a[143915] = actions(8633);
	v->a[143916] = 1;
	v->a[143917] = anon_sym_DOLLAR_LPAREN;
	v->a[143918] = state(1976);
	v->a[143919] = 2;
	small_parse_table_7196(v);
}

void	small_parse_table_7196(t_small_parse_table_array *v)
{
	v->a[143920] = sym_expansion;
	v->a[143921] = sym_command_substitution;
	v->a[143922] = 5;
	v->a[143923] = actions(57);
	v->a[143924] = 1;
	v->a[143925] = sym_comment;
	v->a[143926] = actions(8635);
	v->a[143927] = 1;
	v->a[143928] = sym_simple_heredoc_body;
	v->a[143929] = actions(8637);
	v->a[143930] = 1;
	v->a[143931] = sym__heredoc_body_beginning;
	v->a[143932] = state(3949);
	v->a[143933] = 1;
	v->a[143934] = sym_heredoc_body;
	v->a[143935] = state(2366);
	v->a[143936] = 2;
	v->a[143937] = sym__heredoc_body;
	v->a[143938] = sym__simple_heredoc_body;
	v->a[143939] = 5;
	small_parse_table_7197(v);
}

void	small_parse_table_7197(t_small_parse_table_array *v)
{
	v->a[143940] = actions(57);
	v->a[143941] = 1;
	v->a[143942] = sym_comment;
	v->a[143943] = actions(8637);
	v->a[143944] = 1;
	v->a[143945] = sym__heredoc_body_beginning;
	v->a[143946] = actions(8639);
	v->a[143947] = 1;
	v->a[143948] = sym_simple_heredoc_body;
	v->a[143949] = state(3852);
	v->a[143950] = 1;
	v->a[143951] = sym_heredoc_body;
	v->a[143952] = state(2284);
	v->a[143953] = 2;
	v->a[143954] = sym__heredoc_body;
	v->a[143955] = sym__simple_heredoc_body;
	v->a[143956] = 6;
	v->a[143957] = actions(57);
	v->a[143958] = 1;
	v->a[143959] = sym_comment;
	small_parse_table_7198(v);
}

void	small_parse_table_7198(t_small_parse_table_array *v)
{
	v->a[143960] = actions(8635);
	v->a[143961] = 1;
	v->a[143962] = sym_simple_heredoc_body;
	v->a[143963] = actions(8637);
	v->a[143964] = 1;
	v->a[143965] = sym__heredoc_body_beginning;
	v->a[143966] = state(2371);
	v->a[143967] = 1;
	v->a[143968] = sym__heredoc_body;
	v->a[143969] = state(2372);
	v->a[143970] = 1;
	v->a[143971] = sym__simple_heredoc_body;
	v->a[143972] = state(3949);
	v->a[143973] = 1;
	v->a[143974] = sym_heredoc_body;
	v->a[143975] = 4;
	v->a[143976] = actions(3);
	v->a[143977] = 1;
	v->a[143978] = sym_comment;
	v->a[143979] = actions(8641);
	small_parse_table_7199(v);
}

void	small_parse_table_7199(t_small_parse_table_array *v)
{
	v->a[143980] = 1;
	v->a[143981] = anon_sym_in;
	v->a[143982] = actions(8645);
	v->a[143983] = 1;
	v->a[143984] = aux_sym_heredoc_redirect_token1;
	v->a[143985] = actions(8643);
	v->a[143986] = 3;
	v->a[143987] = anon_sym_SEMI_SEMI;
	v->a[143988] = anon_sym_AMP;
	v->a[143989] = anon_sym_SEMI;
	v->a[143990] = 6;
	v->a[143991] = actions(57);
	v->a[143992] = 1;
	v->a[143993] = sym_comment;
	v->a[143994] = actions(8635);
	v->a[143995] = 1;
	v->a[143996] = sym_simple_heredoc_body;
	v->a[143997] = actions(8637);
	v->a[143998] = 1;
	v->a[143999] = sym__heredoc_body_beginning;
	small_parse_table_7200(v);
}

/* EOF small_parse_table_1439.c */
