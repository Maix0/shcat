/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_929.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4645(t_small_parse_table_array *v)
{
	v->a[92900] = state(1173);
	v->a[92901] = 1;
	v->a[92902] = sym__simple_heredoc_body;
	v->a[92903] = state(2151);
	v->a[92904] = 1;
	v->a[92905] = sym_heredoc_body;
	v->a[92906] = 2;
	v->a[92907] = actions(1404);
	v->a[92908] = 1;
	v->a[92909] = sym_comment;
	v->a[92910] = actions(1301);
	v->a[92911] = 5;
	v->a[92912] = sym__concat;
	v->a[92913] = anon_sym_PIPE;
	v->a[92914] = anon_sym_RPAREN;
	v->a[92915] = anon_sym_RBRACE;
	v->a[92916] = aux_sym_concatenation_token1;
	v->a[92917] = 5;
	v->a[92918] = actions(1404);
	v->a[92919] = 1;
	small_parse_table_4646(v);
}

void	small_parse_table_4646(t_small_parse_table_array *v)
{
	v->a[92920] = sym_comment;
	v->a[92921] = actions(4336);
	v->a[92922] = 1;
	v->a[92923] = anon_sym_DOLLAR_LBRACE;
	v->a[92924] = actions(4338);
	v->a[92925] = 1;
	v->a[92926] = anon_sym_DOLLAR_LPAREN;
	v->a[92927] = actions(4340);
	v->a[92928] = 1;
	v->a[92929] = anon_sym_BQUOTE;
	v->a[92930] = state(500);
	v->a[92931] = 2;
	v->a[92932] = sym_expansion;
	v->a[92933] = sym_command_substitution;
	v->a[92934] = 6;
	v->a[92935] = actions(1404);
	v->a[92936] = 1;
	v->a[92937] = sym_comment;
	v->a[92938] = actions(4208);
	v->a[92939] = 1;
	small_parse_table_4647(v);
}

void	small_parse_table_4647(t_small_parse_table_array *v)
{
	v->a[92940] = sym__heredoc_body_beginning;
	v->a[92941] = actions(4265);
	v->a[92942] = 1;
	v->a[92943] = sym_simple_heredoc_body;
	v->a[92944] = state(1277);
	v->a[92945] = 1;
	v->a[92946] = sym__heredoc_body;
	v->a[92947] = state(1280);
	v->a[92948] = 1;
	v->a[92949] = sym__simple_heredoc_body;
	v->a[92950] = state(2240);
	v->a[92951] = 1;
	v->a[92952] = sym_heredoc_body;
	v->a[92953] = 6;
	v->a[92954] = actions(1404);
	v->a[92955] = 1;
	v->a[92956] = sym_comment;
	v->a[92957] = actions(4208);
	v->a[92958] = 1;
	v->a[92959] = sym__heredoc_body_beginning;
	small_parse_table_4648(v);
}

void	small_parse_table_4648(t_small_parse_table_array *v)
{
	v->a[92960] = actions(4265);
	v->a[92961] = 1;
	v->a[92962] = sym_simple_heredoc_body;
	v->a[92963] = state(1270);
	v->a[92964] = 1;
	v->a[92965] = sym__heredoc_body;
	v->a[92966] = state(1274);
	v->a[92967] = 1;
	v->a[92968] = sym__simple_heredoc_body;
	v->a[92969] = state(2240);
	v->a[92970] = 1;
	v->a[92971] = sym_heredoc_body;
	v->a[92972] = 5;
	v->a[92973] = actions(1404);
	v->a[92974] = 1;
	v->a[92975] = sym_comment;
	v->a[92976] = actions(4342);
	v->a[92977] = 1;
	v->a[92978] = anon_sym_DOLLAR_LBRACE;
	v->a[92979] = actions(4344);
	small_parse_table_4649(v);
}

void	small_parse_table_4649(t_small_parse_table_array *v)
{
	v->a[92980] = 1;
	v->a[92981] = anon_sym_DOLLAR_LPAREN;
	v->a[92982] = actions(4346);
	v->a[92983] = 1;
	v->a[92984] = anon_sym_BQUOTE;
	v->a[92985] = state(638);
	v->a[92986] = 2;
	v->a[92987] = sym_expansion;
	v->a[92988] = sym_command_substitution;
	v->a[92989] = 5;
	v->a[92990] = actions(1404);
	v->a[92991] = 1;
	v->a[92992] = sym_comment;
	v->a[92993] = actions(4348);
	v->a[92994] = 1;
	v->a[92995] = anon_sym_DOLLAR_LBRACE;
	v->a[92996] = actions(4350);
	v->a[92997] = 1;
	v->a[92998] = anon_sym_DOLLAR_LPAREN;
	v->a[92999] = actions(4352);
	small_parse_table_4650(v);
}

/* EOF small_parse_table_929.c */
